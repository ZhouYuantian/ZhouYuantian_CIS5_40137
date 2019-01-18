/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int N;
    int C;
    int O;
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> C  >> N;
    if ( N > C)
    {
    O = N - C;
    cout << "Meeting cannot be held.\n" << "Reduce number of people by " << O << " to avoid fire violation.";
    }
    else
    {
        O = C - N;
    cout << "Meeting can be held.\n" << "Increase number of people by " << O  << " will be allowed without violation.";
    }
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}