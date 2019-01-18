//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int SIZE = 30;
    char name1[30];
    char name2[30];
    char name3[30];
    int a;
    int b;
    int c;
    
    
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
  cin >> name1 >> a;
  cin >> name2 >> b;
  cin >> name3 >> c;
  
   if (a<b)
   {
       if(b<c)
       cout << name1 << setw(5) << a << "\n" << name2 << setw(5) << b << "\n" << name3 << setw(5) << c;
       else if(c<a)
       cout << name3 << setw(5) << c << "\n" << name1 << setw(5) << a << "\n" << name2 << setw(5) << b;
       else
       cout << name1 << setw(5) << a << "\n" << name3 << setw(5) << c << "\n" << name2 << setw(5) << b;
   }
   else if (b<a)
   {
       if(c<b)
       cout << name3 << setw(5) << c << "\n" << name2 << setw(5) << b << "\n" << name1 << setw(5) << a;
       else if(a<c)
       cout << name2 << setw(5) << b << "\n" << name1 << setw(5) << a << "\n" << name3 << setw(5) << c;
       else
       cout << name2 << setw(5) << b << "\n" << name3 << setw(5) << c << "\n" << name1 << setw(5) << a;
   }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
