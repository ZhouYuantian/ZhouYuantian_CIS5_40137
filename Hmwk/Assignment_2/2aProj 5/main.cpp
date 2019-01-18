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
    float t;
    float p;
    float r;
    cout << "This program calculates the gross paycheck.\n" << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> p  >> t;
    if(t > 40)
    {
     r = 40 * p + 2 * p * (t - 40);
     
     cout << fixed << setprecision(2) << "Paycheck = $" << setw(7) << r;
    }
    else
    {
        r = p * t;
        cout << fixed << setprecision(2) << "Paycheck = $" << setw(7) << r;

    }
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}