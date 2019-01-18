/* 
 * Author: 
 * Date:
 * Purpose:
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    double a;
    double b;
    double c;
    double d;
    double e;
    double sum;
    double average;

    cout << "Input 5 numbers.\n";
    cin >> a >>  b >>  c >>  d >>  e;
    sum = a + b + c + d + e;
    average = static_cast<double>(sum) / 5;
    cout << "The average is " << average;
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}