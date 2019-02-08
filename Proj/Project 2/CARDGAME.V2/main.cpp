
/* 
 * File:   main.cpp
 * Author: Yuantian Zhou
 *
 * Created on 2019.1.30
 * Two players select 5 cards for each for random,
 * the one who has large number or large group of card wins
 * compare the cards one by one 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
  char card[52];//total 52 cards;
  char color[52]="0123" ;//4 classes of cards;
  char cgame[6];//player1's cards;
  char clg[6];//player1's cards' color;
  char cgame1[6];//player2's cards;
  char clg1[6];//player2's color;
  char c1[14] ="23456789BJQKA";//cards' numbers
  string str[3]={"a","b","c"};
	char fourc[4][6];
	char cardc[4][6];
  int num[14];
  template <class T>
 void Pvector(const vector<T> & v);
void pCo(); //print the card pool
void pRuslt(char s[]);//print the player's card
int findb(char c);//find the index to compare
 void insertSort(char s[],char c);
    int  fSeq(char s[],char cl[]);
void sortCgame(char s[],char st[]);//sort the card pool
bool  lorl(char s[],char s1[],int &n); //compare players cards
void sortCgame(char s[]);
int main(int argc, char** argv) {
    char ss;//for calculate the loss times
        ofstream ofile;
    char fname[20]="result.txt";//file type:txt
    char a;
    float lossN=0;//number of times of loss
    int d[5]={1,2,3,4,5};
    vector<int> v(d,d+1);
        Pvector(v);
    bool YorN=true;
    while(YorN)
    {
        a='f';
        while(a!='Y')//valid input
        {
            cout<<"Do you want to play the game?(input 'Y' to play,'N'to exist)";
            cin >>a;
            if(a=='N')
            {
                cout<<"game out"<<endl;
                YorN=false;
                a='Y';
            }
        }
        if(!YorN)
        {
            continue;
        }
        srand(static_cast<unsigned int>(time(0)));
     int A[4]={0};
     int B[4][13]={0};
     int n=0;
     int c,d;
     while(n<52)
     {
         c = rand()%4;//0 is spade,1 is heart, 2 is club,3 is diamand
            if (A[c]<13)
         {
             d = rand()%13;
             if (B[c][d]==0)
             {
                 card[n]=c1[d];
                 B[c][d]=1;
		 A[c]++;
                 color[n]=c;
                         n++;
             }
             else
             {
                 bool r=true;
                 while(B[c][d]==1&&r)
		{
			d=(d+1)%13;
			if (B[c][d]==1)
				continue;
                        else
                        {
				card[n]=c1[d];
				B[c][d]=1;
                                 A[c]++;
				color[n]=c;
				n++;
				r=false;
                         }
                 };                      
                 
             }
         }
         else 
         {
             c=(c+1)%4;
           
         }   
     }
	
     pCo();
          c=0;
     do
     {
         cgame[c]=card[2*c];
		 clg[c]=color[2*c]+48;
		 cgame1[c]=card[2*c+1];
		 clg1[c]=color[2*c+1]+48;
                 c++;
     }while(c<5);
	 	  //test straight draw,and same color straight
	    	cgame[5]=0;
	clg[5]=0;
	pRuslt(cgame);
	cout<<" ";
	pRuslt(cgame1);
	cout<<endl;
	cout<<clg<<" "<<clg1<<endl;
	sortCgame(cgame,clg);
	sortCgame(cgame1,clg1);
	pRuslt(cgame);
	cout<<" ";
	pRuslt(cgame1);
	cout<<endl;
	cout<<clg<<" "<<clg1<<endl;
	int largeOrLess;
	lorl(cgame,cgame1,largeOrLess);
	int ct1,ct2;
	ct1=fSeq(cgame,clg);//ct1,ct2 repersent the cards type
	ct2=fSeq(cgame1,clg1);
        switch(largeOrLess){
            case 1: 
                {
			pRuslt(cgame);
			if(ct1<=ct2)
			{
				cout<<">";// win
				ss='>';
			}
			else
			{//lose
				cout<<"<";
				ss='<';
				lossN+=largeOrLess;
			}
                       
			pRuslt(cgame1);
			cout<<endl;
                        break;
                }
            case -1:
                {
					pRuslt(cgame);
	
					if(ct1<ct2)
					{
						cout<<">";// win
						ss='>';
					}
					else
					{//lose
						cout<<"<";
						ss='<';
						lossN+=largeOrLess;
					}
						pRuslt(cgame1);
						cout<<endl;
                        //lossN+=largeOrLess;
                        break;
				 }
            case 0: //
                {
					pRuslt(cgame);
					if(ct1<ct2)
					{
						cout<<">";// win
						ss='>';
					}
					else if(ct1>ct2)
					{//lose
						cout<<"<";
						ss='<';
						lossN+=largeOrLess;
					}
					else
					{
						if(clg[0]<clg1[0])
						{
							cout<<">";// win
							ss='>';
				
						}
						else
						{
							cout<<"<";
							ss='<';
							lossN+=largeOrLess;

						}

			
					}
						pRuslt(cgame1);
						cout<<endl;
                        
                }
        }
	    ofile.open(fname,ios::app);
        ofile<<" "<<cgame<<ss<<cgame1<<endl;
        ofile<<endl;
        ofile.close();

    }
    cout<<"the number of loss times is "<<abs(lossN)<<endl;
    exit(0);
}
template <class T>
 void Pvector(const vector<T> & v)
{
    typename vector<T>::const_iterator i;
    for(i=v.begin();i!=v.end();++i)
        cout<<endl;
 }

void pCo() //print the card pool
{
	cout<<endl;
    for(int c=0;c<52;c++)
     {
		cout<<setw(3)<<c<<" ";
         if(card[c]=='B') //B is symbol of "10"
             cout<<setw(3)<<  10 << " "; //change "B" to "10";
         else
             cout<<setw(3)<< card[c]<<" ";
         cout<<setw(3)<<char(color[c]+'0')<<endl;
     }
}
void pRuslt(char s[])//print the player's card
{
	int i=0,len=0;
	while(s[i++])
		len++;
	for(i=0;i<len;i++)
            (s[i]=='B')?cout<<10<<"  ":cout<<s[i]<<"  ";
 }
int findb(char c)//find the index to compare
{
	for(int i=0;i<13;i++)
		if(c1[i]==c)
			return i;
}
void insertSort(char s[],char c)
  {//binary sort
	  char temp;
	  int i=0,len=0;
	  while(s[i++])
		  len++;
	  i=len;
	  while(findb(c)>findb(s[i-1]))
	  {
		  s[i]=s[i-1];
		  i--;
	  }
	  s[i]=c;
  }
int  fSeq(char s[],char cl[])
  {//determind the type of cards group, such as straight.
	  //same color straight,four and one,three and two,same color,straight,three,two,mess
	  int i=0,c1;
	  int k[4]={0},delta=1;
	  int ctype;//
	  char c,*p;
	  while(i<5)
	  {
		  c=s[i];//card
		  c1=cl[i]-48;//color
		  p=cardc[c1];
		  insertSort(p,c);
		  k[c1]++;
		  i++;
	  }
	  if(k[0]==5||k[1]==5 || k[2]==5 || k[5]==5)
	  {
		  ctype=1;//assume its same color straight
		  i=0;
		  while(i<4 && delta==1 && ctype==1)
		  {
			  delta=findb(s[i])-findb(s[i+1]);
			  if(delta!=1)
				  ctype=4;//is same color straight
			  i++;
		  }
		  
	  }
	  else
		ctype=2;//if is not straight or same color straight repeat test
		return ctype;

  
  }
void sortCgame(char s[],char st[])//sort the card pool
{//selection sort
	int i=0,j,k,len=0;
	char temp;
	while(s[i])
	{
		len++;
		i++;
	}
	for(i=0;i<len-1;i++)
	{
		k=i;
		for(j=i+1;j<len;j++)
		{
			if(findb(s[k])<findb(s[j]))
				k=j;
		}
		if(k!=i)
		{
			temp=s[i];
			s[i]=s[k];
			s[k]=temp;
			temp=st[i];
			st[i]=st[k];
			st[k]=temp;			
		}

	}
}
bool  lorl(char s[],char s1[],int &n) //compare players cards
{
	int i=0,len=0;
	char temp;
	while(s[i])
	{
		len++;
		i++;
	}
	for(i=0;i<len;i++)
	{
		if(findb(s[i])<findb(s1[i]))
                {
                    n= -1;
                    return true;
                }
		if (findb(s[i])>findb(s1[i]))
                {
			n= 1;
                        return true;
                }
	}
	n= 0;
        return false;	
}
void sortCgame(char s[])
{
    cout<<" ";
}