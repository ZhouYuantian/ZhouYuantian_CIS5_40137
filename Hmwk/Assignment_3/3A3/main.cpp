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
    float b;
    int c;
    float f;
    float m;
    float lb;
    float nb;
    cout << "Monthly Bank Fees\n";
    cout << "Input Current Bank Balance and Number of Checks\n";
    cin >> b  >> c;
    
    if (b<0)
    {
        cout << "The account is overdrawn.";
        return 0;
    }
    if (c<20)
    f= c*0.1;
    else if (c>=20 && c<=39)
    f = c*0.08;
    else if (c>=40 && c<=59)
    f = c*0.06;
    else if (c>=60)
    f = c*0.04;
    m = 10;
    if (b < 400)
    lb = 15;
    else
    lb = 0;
    nb = b - lb - f -m;
    cout << fixed << setprecision(2) << "Balance     $" << setw(9) << b << "\n";
    cout << fixed << setprecision(2) << "Check Fee   $" << setw(9) << f << "\n";
    cout << fixed << setprecision(2) << "Monthly Fee $" << setw(9) << m << "\n";
    cout << fixed << setprecision(2) << "Low Balance $" << setw(9) << lb << "\n";
    cout << fixed << setprecision(2) << "New Balance $" << setw(9) << nb;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}