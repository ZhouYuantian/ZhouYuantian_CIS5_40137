
//* File:   main.cpp
 //* Author: Yuantian Zhou
 //* Created on January 18th, 2019, 11:25 AM
 //* Purpose:  Pattern
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int a;
    cin >> a;
    for (int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
        cout << "+";
        }
        cout << "\n\n";
    }
     for (int x=1;x<a;x++)
     {
         for(int y=a;y>=x;y--)
         {
         cout << "+";
         }
         cout << "\n\n";
     }
     cout << "+";
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}