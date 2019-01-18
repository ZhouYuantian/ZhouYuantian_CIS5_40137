/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int n;
   

     cout << "Arabic to Roman numeral conversion.\n";
     cout << "Input the integer to convert.\n";
     cin >> n;
     if (n > 3000 || n < 1000)
     {
         cout << n << " is Out of Range!";
         return 0;
     }
     cout << n << " is equal to ";
     int i,j,k,l;
     l=(n/1000)%10;
     if (l==1)
          cout<<"M";
     if(l==2)
          cout<<"MM";
     
     
     
     k=(n/100)%10;
     if (k == 1)
       cout<<"C";
   else if (k == 2)
       cout<<"CC";
   else if (k == 3)
       cout<<"CCC";
   else if (k == 4)
       cout<<"CD";
   else if (k ==5)
       cout<<"D";
   else if (k == 6)
       cout<<"DC";
   else if (k == 7)
       cout<<"DCC";
   else if (k ==8)
       cout<<"DCCC";
   else if (k == 9)
       cout<<"CM";
     
     j=(n/10)%10;
     if (j == 1)
       cout<<"X";
   else if (j == 2)
       cout<<"XX";
   else if (j == 3)
       cout<<"XXX";
   else if (j == 4)
       cout<<"XL";
   else if (j ==5)
       cout<<"L";
   else if (j == 6)
       cout<<"LX";
   else if (j == 7)
       cout<<"LXX";
   else if (j ==8)
       cout<<"LXXX";
   else if (j == 9)
       cout<<"XC";
     i=(n)%10;
     if (i == 1)
       cout<<"I";
   else if (i == 2)
       cout<<"II";
   else if (i == 3)
       cout<<"III";
   else if (i == 4)
       cout<<"IV";
   else if (i ==5)
       cout<<"V";
   else if (i == 6)
       cout<<"VI";
   else if (i == 7)
       cout<<"VII";
   else if (i ==8)
       cout<<"VIII";
   else if (i == 9)
       cout<<"IX";
   

   
   

    
     

     
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}