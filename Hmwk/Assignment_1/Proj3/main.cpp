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
    int x;
    int y;
    int z;
    int n;
    
    cout << "Input 2 integer numbers.\n\n";
    cin >> x  >> y;
    z = x * y;
    n = y / x;
    cout << "The product of " << x << "*" << y << " = " << z << "\n\n";
    cout << "The quotient of " << y << "/" << x << " = " << n;
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}