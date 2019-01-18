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
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float a;
    float s;
    float c;
    float t;
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin >> a;
    a = a / 180;
    a = a * 3.1415926;
    s = sin(a);
    c = cos(a);
    t = tan(a);
    a = a / 3.1415926 * 180;
    cout << "sin(" << a << ") = ";
    cout << fixed << setprecision(4) << s << "\n";
    cout << fixed << setprecision(0) << "cos(" << a << ") = ";
    cout << fixed << setprecision(4) << c << "\n";
    cout << fixed << setprecision(0) <<"tan(" << a << ") = ";
    cout << fixed << setprecision(4) << t;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}