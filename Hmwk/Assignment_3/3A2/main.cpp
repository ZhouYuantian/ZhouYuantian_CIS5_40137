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
    int books;
    cout << "Book Worm Points\n";
    cout << "Input the number of books purchased this month.\n";
    cin >> books;
    cout << "Books purchased =" << setw(3) << books << "\n";
    
    switch (books)
    {
        case 0: cout << "Points earned" << setw(5) << "= " << setw(2) << 0;
        break;
        case 1: cout << "Points earned" << setw(5) << "= " << setw(2) << 5;
        break;
        case 2: cout << "Points earned" << setw(5) << "= " << setw(2) << 15;
        break;
        case 3: cout << "Points earned" << setw(5) << "= " << setw(2) << 30;
        break;
        default: cout << "Points earned" << setw(5) << "= " << setw(2) << 60;
    }
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}