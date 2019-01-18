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
    int P = 0;
    int N = 0;
    int n;
    int T;
    cout << "Input 10 numbers, any order, positive or negative\n";
    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        if(n > 0)
        P+=n;
        else
        N+=n;
    }
    T = P + N;
    cout << "Negative sum =" << setw(4) << N << "\n";
    cout << "Positive sum =" << setw(4) << P << "\n";
    cout << "Total sum    =" << setw(4) << T;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}