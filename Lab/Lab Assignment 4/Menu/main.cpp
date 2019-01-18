#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();



//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem
    
    //Loop Menu until exit
    do{

        //Initialize or input i.e. set variable values
        cout<<"Menu Program"<<endl;
        cout<<"Type 1 for problem 1"<<endl;
        cout<<"Type 2 for problem 2"<<endl;
        cout<<"Type 3 for problem 3"<<endl;
        cout<<"Type 4 for problem 4"<<endl;
        cout<<"Type 5 for problem 5"<<endl;
        cout<<"Type 6 for problem 6"<<endl;
        cout<<"Type 7 for problem 7"<<endl;
        cout<<"Type 8 for problem 8"<<endl;
        cout<<"Type anything else to exit"<<endl;
        cin>>wchProb;

        //Solve Problems
        switch(wchProb){
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            case '5':problem5();break;
            case '6':problem6();break;
            case '7':problem7();break;
            case '8':problem8();break;
            
            default :cout<<"Exiting Menu, no problem selected"<<endl;
        }
    
    //End of Menu/problems
    }while(wchProb>='1'&&wchProb<='8');

    //Exit stage right or left!
    return 0;
}
void problem8(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"
<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
    
   <<" int n;\n"
   

    <<" cout << \"Arabic to Roman numeral conversion.\\n\";\n"
   <<"  cout << \"Input the integer to convert.\\n\";\n"
    <<" cin >> n;\n"
    <<" if (n > 3000 || n < 1000)\n"
    <<" {\n"
       <<"  cout << n << \" is Out of Range!\";\n"
       <<"  return 0;\n"
    <<" }\n"
    <<" cout << n << \" is equal to\";\n"
    <<" int i,j,k,l;\n"
    <<" l=(n/1000)%10;\n"
    <<"if (l==1)\n"
     <<"     cout<<\"M\";\n"
    <<" if(l==2)\n"
        <<"  cout<<\"MM\";\n"
     
     
     
     <<"k=(n/100)%10;\n"
     <<"if (k == 1)\n"
    <<"   cout<<\"C\";\n"
   <<"else if (k == 2)\n"
   <<"    cout<<\"CC\";\n"
   <<"else if (k == 3)\n"
     <<"  cout<<\"CCC\";\n"
  <<" else if (k == 4)\n"
    <<"   cout<<\"CD\";\n"
   <<"else if (k ==5)\n"
    <<"   cout<<\"D\";\n"
   <<"else if (k == 6)\n"
       <<"cout<<\"DC\";\n"
   <<"else if (k == 7)\n"
       <<"cout<<\"DCC\";\n"
  <<" else if (k ==8)\n"
      <<" cout<<\"DCCC\";\n"
   <<"else if (k == 9)\n"
      <<" cout<<\"CM\";\n"
     
    <<" j=(n/10)%10;\n"
    <<" if (j == 1)\n"
     <<"  cout<<\"X\";\n"
   <<"else if (j == 2)\n"
     <<"  cout<<\"XX\";\n"
   <<"else if (j == 3)\n"
     <<"  cout<<\"XXX\";\n"
   <<"else if (j == 4)\n"
     <<"  cout<<\"XL\";\n"
   <<"else if (j ==5)\n"
      <<" cout<<\"L\";\n"
   <<"else if (j == 6)\n"
      <<" cout<<\"LX\";\n"
   <<"else if (j == 7)\n"
       <<"cout<<\"LXX\";\n"
   <<"else if (j ==8)\n"
      <<" cout<<\"LXXX\";\n"
   <<"else if (j == 9)\n"
      <<" cout<<\"XC\";\n"
     <<"i=(n)%10;\n"
     <<"if (i == 1)\n"
     <<"  cout<<\"I\";\n"
   <<"else if (i == 2)\n"
   <<"    cout<<\"II\";\n"
   <<"else if (i == 3)\n"
      <<" cout<<\"III\";\n"
   <<"else if (i == 4)\n"
    <<"   cout<<\"IV\";\n"
   <<"else if (i ==5)\n"
     <<"  cout<<\"V\";\n"
   <<"lse if (i == 6)\n"
      <<" cout<<\"VI\";\n"
  <<" else if (i == 7)\n"
     <<"  cout<<\"VII\";\n"
   <<"else if (i ==8)\n"
      <<" cout<<\"VIII\";\n"
   <<"else if (i == 9)\n"
      <<" cout<<\"IX\";\n"
 
   <<" return 0;\n"
<<"}\n"<<endl;
}
void problem7(){
    cout<<"#include <iostream>\n"
<<"#include <iomanip>\n"
<<"#include <cstring>\n"
<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
    
    <<"const int SIZE = 100;\n"
   <<" char a[SIZE];\n"
   <<" char b[SIZE];\n"
    <<"char c[]=\"Aries\";\n"
   <<" char d[]=\"Leo\";\n"
    <<"char e[]=\"Sagittarius\";\n"
   <<" char f[]=\"Taurus\";\n"
    <<"char g[]=\"Virgo\";\n"
    <<"char h[]=\"Capricorn\";\n"
    <<"char i[]=\"Gemini\";\n"
   <<" char j[]=\"Libra\";\n"
    <<"char k[]=\"Aquarius\";\n"
   <<" char l[]=\"Cancer\";\n"
    <<"char m[]=\"Scorpio\";\n"
   <<" char n[]=\"Pisces\";\n"
    
    

    <<"cout << \"Horoscope Program which examines compatible signs.\\n\";\n"
    <<"cout << \"Input 2 signs.\\n\";\n"
    <<"cin >> a  >> b;\n"
    <<" if(strcmp(a,c)==0)\n"
    <<"{\n"
       <<" if(strcmp(b,d)==0)\n"
       <<" {\n"
      <<"      cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
       <<" }  \n"
       <<" else if(strcmp(b,e)==0)\n"
       <<" {\n"
         <<"   cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
       <<" }\n"
       <<" else\n"
       <<" {\n"
         <<"   cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
   <<" }\n"
       <<" else if(strcmp(a,d)==0)\n"
    <<"{\n"
       <<" if(strcmp(b,c)==0)\n"
       <<" {\n"
          <<"  cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
        <<"}  \n"
       <<" else if(strcmp(b,e)==0)\n"
        <<"{\n"
        <<"    cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
        <<"}\n"
       <<" else\n"
       <<" {\n"
           <<" cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
   <<" }\n"
     <<"else if(strcmp(a,e)==0)\n"
    <<"{\n"
      <<"  if(strcmp(b,c)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
       <<" }  \n"
       <<" else if(strcmp(b,d)==0)\n"
       <<" {\n"
           <<" cout << a << \" and \" << b << \" are compatible Fire signs.\";\n"
       <<" }\n"
       <<" else\n"
       <<" {\n"
         <<"   cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
   <<" }\n"
    <<" else if(strcmp(a,f)==0)\n"
    <<"{\n"
      <<"  if(strcmp(b,g)==0)\n"
      <<"  {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
       <<" }  \n"
      <<"  else if(strcmp(b,h)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
       <<" }\n"
      <<"  else\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are not compatible signs.\";\n"
        <<"}\n"
        
   <<" }\n"
     <<"else if(strcmp(a,g)==0)\n"
    <<"{\n"
        <<"if(strcmp(b,f)==0)\n"
       <<" {\n"
       <<"     cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
      <<"  }  \n"
      <<" else if(strcmp(b,h)==0)\n"
        <<"{\n"
            <<"cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
       <<" }\n"
        <<"else\n"
      <<"  {\n"
           <<" cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
    <<"}\n"
    <<" else if(strcmp(a,h)==0)\n"
    <<"{\n"
    <<"    if(strcmp(b,f)==0)\n"
       <<" {\n"
      <<"      cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
      <<"  }  \n"
       <<" else if(strcmp(b,g)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Earth signs.\";\n"
       <<" }\n"
       <<" else\n"
        <<"{\n"
       <<"     cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
   <<" }\n"
    <<" else if(strcmp(a,i)==0)\n"
    <<"{\n"
        <<"if(strcmp(b,j)==0)\n"
        <<"{\n"
        <<"    cout << a << \" and \" << b << \" are compatible Air signs.\";\n"
       <<" }  \n"
       <<" else if(strcmp(b,k)==0)\n"
       <<" {\n"
       <<"     cout << a << \" and \" << b << \" are compatible Air signs.\";\n"
       <<" }\n"
       <<" else\n"
       <<" {\n"
         <<"   cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
    <<"}\n"
     <<"else if(strcmp(a,j)==0)\n"
   <<" {\n"
      <<"  if(strcmp(b,i)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Air signs.\";\n"
       <<" }  \n"
      <<"  else if(strcmp(b,k)==0)\n"
      <<"  {\n"
       <<"     cout << a << \" and \" << b <<\" are compatible Air signs.\";\n"
       <<" }\n"
    <<"    else\n"
       <<" {\n"
     <<"       cout << a << \" and \" << b << \" are not compatible signs.\";\n"
        <<"}\n"
        
    <<"}\n"
       <<" else if(strcmp(a,k)==0)\n"
    <<"{\n"
      <<"  if(strcmp(b,i)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Air signs.\";\n"
        <<"}  \n"
        <<"else if(strcmp(b,j)==0)\n"
       <<" {\n"
      <<"      cout << a << \" and \" << b << \" are compatible Air signs.\";\n"
        <<"}\n"
        <<"else\n"
        <<"{\n"
           <<" cout << a << \" and \" << b << \" are not compatible signs.\";\n"
        <<"}\n"
        
   <<" }\n"
    <<" else if(strcmp(a,l)==0)\n"
    <<"{\n"
       <<" if(strcmp(b,m)==0)\n"
        <<"{\n"
          <<"  cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
       <<" }  \n"
        <<"else if(strcmp(b,n)==0)\n"
        <<"{\n"
          <<"  cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
        <<"}\n"
        <<"else\n"
        <<"{\n"
           <<" cout << a << \" and \" << b << \" are not compatible signs.\";\n"
        <<"}\n"
        
    <<"}\n"
     <<"else if(strcmp(a,m)==0)\n"
    <<"{\n"
        <<"if(strcmp(b,l)==0)\n"
        <<"{\n"
            <<"cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
        <<"}  \n"
        <<"else if(strcmp(b,n)==0)\n"
       <<" {\n"
         <<"   cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
        <<"}\n"
        <<"else\n"
        <<"{\n"
        <<"    cout << a << \" and \" << b << \" are not compatible signs.\";\n"
        <<"}\n"
        
    <<"}\n"
     <<"else if(strcmp(a,n)==0)\n"
   <<" {\n"
      <<"  if(strcmp(b,l)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
       <<" }  \n"
       <<" else if(strcmp(b,m)==0)\n"
       <<" {\n"
        <<"    cout << a << \" and \" << b << \" are compatible Water signs.\";\n"
       <<" }\n"
        <<"else\n"
        <<"{\n"
          <<"  cout << a << \" and \" << b << \" are not compatible signs.\";\n"
       <<" }\n"
        
    <<"}\n"
    <<"return 0;\n"
<<"}\n"<<endl;
}
void problem6(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"

<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
  <<"  char a;\n"
  <<"  char b;\n"
    
   <<" cout << \"Rock Paper Scissors Game\\n\";\n"
  <<"  cout << \"Input Player 1 and Player 2 Choices\\n\";\n"
    <<"cin >> a  >> b;\n"
    <<"switch (a)\n"
    <<"{\n"
      <<"  case 'P' :\n"
      <<"  if (b == 'R')\n"
       <<" cout << \"Paper covers rock.\";\n"
       <<" else if (b == 'S')\n"
       <<" cout << \"Scissors cuts paper.\";\n"
       <<" else if (b == 'P')\n"
        <<"cout << \"Nobody wins.\";\n"
       <<" break;\n"
       <<" case 'R' :\n"
       <<" if (b == 'P')\n"
       <<" cout << \"Paper covers rock.\";\n"
        <<"else if (b =='S')\n"
        <<"cout << \"Rock breaks scissors.\";\n"
        <<"else if (b =='R')\n"
        <<"cout << \"Nobody wins.\";\n"
       <<" break;\n"
       <<" case 'S' :\n"
       <<" if (b == 'R')\n"
       <<" cout << \"Rock breaks scissors.\";\n"
       <<" else if (b == 'P')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 'S')\n"
       <<" cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"default:\n"
       <<" break;\n"
    <<"}\n"
    <<"switch (a)\n"
    <<"{\n"
       <<" case 'p' :\n"
       <<" if (b == 'r')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b == 's')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
       <<" else if (b == 'p')\n"
        <<"cout << \"Nobody wins\";\n"
        <<"break;\n"
        <<"case 'r' :\n"
        <<"if (b == 'p')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b =='s')\n"
       <<" cout << \"Rock breaks scissors.\";\n"
        <<"else if (b =='r')\n"
        <<"cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"case 's' :\n"
        <<"if (b == 'r')\n"
        <<"cout << \"Rock breaks scissors.\";\n"
       <<" else if (b == 'p')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 's')\n"
        <<"cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"default:\n"
        <<"break;\n"
    <<"}\n"
    <<"switch (a)\n"
    <<"{\n"
       <<" case 'p' :\n"
       <<" if (b == 'R')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b == 'S')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 'P')\n"
        <<"cout << \"Nobody wins\";\n"
        <<"break;\n"
       <<" case 'r' :\n"
        <<"if (b == 'P')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b =='S')\n"
       <<" cout << \"Rock breaks scissors.\";\n"
        <<"else if (b =='R')\n"
        <<"cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"case 's' :\n"
        <<"if (b == 'R')\n"
       <<" cout << \"Rock breaks scissors.\";\n"
        <<"else if (b == 'P')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 'S')\n"
       <<" cout << \"Nobody wins.\";\n"
       <<" break;\n"
       <<" default:\n"
       <<" break;\n"
    <<"}\n"
    <<"switch (a)\n"
    <<"{\n"
      <<"  case 'P' :\n"
       <<" if (b == 'r')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b == 's')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 'p')\n"
        <<"cout << \"Nobody wins\";\n"
        <<"break;\n"
        <<"case 'R' :\n"
        <<"if (b == 'p')\n"
        <<"cout << \"Paper covers rock.\";\n"
        <<"else if (b =='s')\n"
        <<"cout << \"Rock breaks scissors.\";\n"
        <<"else if (b =='r')\n"
        <<"cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"case 'S' :\n"
        <<"if (b == 'r')\n"
        <<"cout << \"Rock breaks scissors.\";\n"
        <<"else if (b == 'p')\n"
        <<"cout << \"Scissors cuts paper.\";\n"
        <<"else if (b == 's')\n"
        <<"cout << \"Nobody wins.\";\n"
        <<"break;\n"
        <<"default:\n"
        <<"break;\n"
    <<"}\n"
    
    <<"return 0;\n"
<<"}\n"<<endl;
}
void problem5(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <cstring>\n"
<<"#include <iomanip>\n"
<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
   <<" int hour;\n"
   <<"char pack;\n"
    <<"double bill;\n"
   <<" cout << \"ISP Bill\\n\";\n"
    <<"cout << \"Input Package and Hours\\n\";\n"
    <<"cin >> pack  >> hour;\n"
   <<"if (hour > 744)\n"
  <<" {\n"
   <<"  cout << \"Validation\";\n"
    <<"}\n"
    <<"else\n"
    <<"{\n"
    <<" switch (pack)\n"
     <<"{\n"
       <<" case 'A':\n"
        
        <<"if (hour > 10)\n"
       <<" {\n"
        <<" bill = 9.95 + ((hour - 10) * 2);\n"
        <<" cout << fixed << setprecision(2) << \"Bill = $\" << setw(6) << bill;\n"
        <<"}\n"
        <<"else\n"
        
        <<"{\n"
          <<"bill = 9.95;\n"
           <<"cout << fixed << setprecision(2) << \"Bill = $\" << setw(6) << bill;\n"
        <<"}\n"
        <<"break;\n"
        <<"case 'B':\n"
        <<"if (hour > 20)\n"
        <<"{\n"
        <<"bill = 14.95 + (hour - 20);\n"
        <<"cout << fixed << setprecision(2) << \"Bill = $\" << setw(6) << bill;\n"
        <<"}\n"
        <<"else\n"
        <<"{\n"
        <<"bill = 14.95;\n"
        <<"cout << fixed << setprecision(2) << \"Bill = $\" << setw(6) << bill;\n"
        <<"}\n"
       <<" break;\n"
        <<"case 'C':\n"
        <<"bill = 19.95;\n"
        <<"cout << fixed << setprecision(2)  << \"Bill = $\" << setw(6) << bill;\n"
       <<" break;\n"
        <<"default :\n"
        <<"cout << \"Validation\";\n"
        <<"break;\n"
      <<"}\n"
    <<"}\n"
 <<" return 0;\n"
<<"}\n"
<<endl;
}
void problem4(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"
<<"#include <cstring>\n"
<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
   
    <<"const int SIZE = 30;\n"
   <<" char name1[30];\n"
    <<"char name2[30];\n"
    <<"char name3[30];\n"
    <<"int a;\n"
    <<"int b;\n"
    <<"int c;\n"
    
    
    <<"cout << \"Race Ranking Program\\n\";\n"
    <<"cout << \"Input 3 Runners\\n\";\n"
   <<" cout << \"Their names, then their times\\n\";\n"
  <<"cin >> name1 >> a;\n"
  <<"cin >> name2 >> b;\n"
 <<" cin >> name3 >> c;\n"
  
   <<"if (a<b)\n"
   <<"{\n"
      <<" if(b<c)\n"
      <<" cout << name1 << setw(5) << a << \"\\n\" << name2 << setw(5) << b << \"\\n\" << name3 << setw(5) << c;\n"
       <<"else if(c<a)\n"
      <<" cout << name3 << setw(5) << c << \"\\n\" << name1 << setw(5) << a << \"\\n\" << name2 << setw(5) << b;\n"
       <<"else\n"
      <<" cout << name1 << setw(5) << a << \"\\n\" << name3 << setw(5) << c << \"\\n\" << name2 << setw(5) << b;\n"
   <<"}\n"
   <<"else if (b<a)\n"
   <<"{\n"
     <<"  if(c<b)\n"
      <<" cout << name3 << setw(5) << c << \"\\n\" << name2 << setw(5) << b << \"\\n\" << name1 << setw(5) << a;\n"
       <<"else if(a<c)\n"
       <<"cout << name2 << setw(5) << b << \"\\n\" << name1 << setw(5) << a << \"\\n\" << name3 << setw(5) << c;\n"
       <<"else\n"
       <<"cout << name2 << setw(5) << b << \"\\n\" << name3 << setw(5) << c << \"\\n\" << name1 << setw(5) << a;\n"
   <<"}\n"
   
    <<"return 0;\n"
<<"}\n"<<endl;
}
void problem3(){
    cout<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    
    //Declare Variables
   <<" float b;\n"
   <<" int c;\n"
    <<"float f;\n"
    <<"float m;\n"
    <<"float lb;\n"
   <<" float nb;\n"
   <<" cout << \"Monthly Bank Fees\\n\";\n"
    <<"cout << \"Input Current Bank Balance and Number of Checks\\n\";\n"
   <<" cin >> b  >> c;\n"
    
    <<"if (b<0)\n"
    <<"{\n"
        <<"cout << \"The account is overdrawn.\";\n"
        <<"return 0;\n"
    <<"}\n"
    <<"if (c<20)\n"
    <<"f= c*0.1;\n"
    <<"else if (c>=20 && c<=39)\n"
    <<"f = c*0.08;\n"
   <<" else if (c>=40 && c<=59)\n"
    <<"f = c*0.06;\n"
    <<"else if (c>=60)\n"
    <<"f = c*0.04;\n"
    <<"m = 10;\n"
    <<"if (b < 400)\n"
    <<"lb = 15;\n"
    <<"else\n"
    <<"lb = 0;\n"
    <<"nb = b - lb - f -m;\n"
    <<"cout << fixed << setprecision(2) << \"Balance     $\" << setw(9) << b << \"\\n\";\n"
   <<" cout << fixed << setprecision(2) << \"Check Fee   $\" << setw(9) << f << \"\\n\";\n"
    <<"cout << fixed << setprecision(2) << \"Monthly Fee $\" << setw(9) << m << \"\\\n\";\n"
   <<" cout << fixed << setprecision(2) << \"Low Balance $\" << setw(9) << lb << \"\\n\";\n"
    <<"cout << fixed << setprecision(2) << \"New Balance $\" << setw(9) << nb;\n"
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    <<"return 0;\n"
<<"}\n"<<endl;
}

void problem2(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"
<<"using namespace std;\n"


<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    <<"int books;\n"
    <<"cout << \"Book Worm Points\\n\";\n"
    <<"cout << \"Input the number of books purchased this month.\\n\";\n"
    <<"cin >> books;\n"
    <<"cout << \"Books purchased =\" << setw(3) << books << \"\\n\";\n"
    
    <<"switch (books)\n"
    <<"{\n"
        <<"case 0: cout << \"Points earned\" << setw(5) << \"= \" << setw(2) << 0;\n"
        <<"break;\n"
       <<" case 1: cout << \"Points earned\" << setw(5) << \"= \" << setw(2) << 5;\n"
        <<"break;\n"
        <<"case 2: cout << \"Points earned\" << setw(5) << \"= \" << setw(2) << 15;\n"
        <<"break;\n"
        <<"case 3: cout << \"Points earned\" << setw(5) << \"= \" << setw(2) << 30;\n"
       <<"break;\n"
        <<"default: cout << \"Points earned\" << setw(5) << \"= \" << setw(2) << 60;\n"
        <<"}\n"
   
    <<"return 0;\n"
<<"}"<<endl;
}

void problem1(){
    cout<<"#include <iostream>\n"
<<"#include <cstring>\n"

<<"using namespace std;\n"

<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
   << "const int SIZE = 20;\n"
    <<"char name1[SIZE];\n"
   << "char name2[SIZE];\n"
    <<"char name3[SIZE];\n"
    <<"cout << \"Sorting Names\\n\";\n"
    <<"cout << \"Input 3 names\\n\";\n"
    <<"cin.getline(name1, SIZE);\n"
    <<"cin.getline(name2, SIZE);\n"
    <<"cin.getline(name3, SIZE);\n"
    <<"if (strcmp(name2,name3)<0)\n"
    <<"{\n"
        <<"if (strcmp(name1,name2)<0)\n"
        <<"{\n"
        <<"cout << name1 <<\"\\n\" << name2 << \"\\n\" << name3;\n"
        <<"}\n"
        <<"else if (strcmp(name3,name1)<0)\n"
        <<"{\n"
         <<"cout << name2 << \"\\n\" << name3 << \"\\n\" << name1;\n"
        <<"}\n"
        <<"else\n"
        <<"{\n"
        <<"cout << name2 << \"\\n\" << name1 << \"\\n\" << name3;\n"
        <<"}\n"
        
    <<"}\n"
   
    <<"else (strcmp(name3,name2)<0);\n"
    <<"{\n"
        <<"if (strcmp(name1,name3)<0)\n"
        <<"{\n"
            <<"cout << name1 << \"\\n\" << name3 << \"\\n\" << name2;\n"
        <<"}\n"
        <<"else if (strcmp(name2,name1)<0)\n"
        <<"{\n"
            <<"cout << name3 << \"\\n\" << name2 << \"\\n\" << name1;\n"
        <<"}\n"
        <<"else \n"   
        <<"{\n"
            <<"cout << name3 << \"\\n\" << name1 << \"\\n\" << name2;\n"
       <<"}\n"
    <<"}\n"
    
    
    
    
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    <<"return 0;\n"
<<"}"<<endl;
}