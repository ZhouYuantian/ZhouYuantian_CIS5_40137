/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yuantian Zhoou
 * Created on 2019.1.30
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
  char card[52]="1234";
  char color[52] ;
void pCo()
{
	cout<<endl;
    for(int c=0;c<52;c++)
     {
		cout<<setw(3)<<c<<" ";
         if(card[c]=='B')
             cout<<setw(3)<<  10 << " ";
         else
             cout<<setw(3)<< card[c]<<" ";
         cout<<setw(3)<<char(color[c]+'0')<<endl;
     }
}
/*
 * 
 */
int main(int argc, char** argv) {
    
     srand(static_cast<unsigned int>(time(0)));
     int A[4]={0};
     int B[4][13]={0};
   
     char c1[14] ="23456789BJQKA";
     //pCo();
     int n=0;
     int c,d;
     while(n<52)
     {
        
		 c = rand()%4;//0 is spade,1 is heart, 2 is club,3 is diamand
        // cout<<endl<<n<<" "<<  c;
         if (A[c]<13)
         {
             d = rand()%13;
             if (B[c][d]==0)
             {
                 card[n]=c1[d];
                 B[c][d]=1;
				 A[c]++;
                 color[n]=c;
         //        cout<<" "<<card[n];
                 n++;
             }
             else
             {
                 while(B[c][d]==1)
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
				//		  cout<<" "<<card[n];
						 n++;
						 break;
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
     //set the initial 
     
    return 0;
}
