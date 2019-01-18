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
    int gallons;
    int miles;
    double MPG;
    cout << "Input number of gallons and distance traveled.\n";
    cin >> gallons  >> miles;
    MPG = static_cast<double>(miles) / gallons;
    cout << "Your MPG is " << MPG;
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}