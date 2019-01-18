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
    
    float restroactive;
    float ansalary;
    float Nansalary;
    float Nmosalary;
    cout << "Input previous annual salary.\n";
    cin >> ansalary;
    restroactive = ansalary * 0.5 * 0.076;
    
    Nansalary = 2 * restroactive + ansalary;
    Nmosalary = Nansalary / 12;
    
    cout << fixed << setprecision(2) << "Retroactive pay    = $  " << setw(5) << restroactive  << "\n";
    cout << fixed << setprecision(2) <<"New annual salary  = $" << setw(5) << Nansalary << "\n";
    cout << fixed << setprecision(2) << "New monthly salary = $ " << setw(6) << Nmosalary; 

    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}