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
    int Q;
    int D;
    int N;
    int T;
    cout << "Enter the number of Quarters, Dimes and Nickels\n\n";
    cin >> Q  >> D  >> N;
    T = Q * 25 + D * 10 + N * 5;
    cout << Q << " Quarters" << " + " << D << " Dimes" << " + " << N << " Nickels"   << " = "  << T <<  " cents!";
    
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}