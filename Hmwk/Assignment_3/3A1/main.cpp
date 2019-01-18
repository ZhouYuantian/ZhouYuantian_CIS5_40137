/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int SIZE = 20;
    char name1[SIZE];
    char name2[SIZE];
    char name3[SIZE];
    cout << "Sorting Names\n";
    cout << "Input 3 names\n";
    cin.getline(name1, SIZE);
    cin.getline(name2, SIZE);
    cin.getline(name3, SIZE);
    if (strcmp(name2,name3)<0)
    {
        if (strcmp(name1,name2)<0)
        {
        cout << name1 <<"\n" << name2 << "\n" << name3;
        }
        else if (strcmp(name3,name1)<0)
        {
         cout << name2 << "\n" << name3 << "\n" << name1;
        }
        else
        {
        cout << name2 << "\n" << name1 << "\n" << name3;
        }
        
    }
   
    else (strcmp(name3,name2)<0);
    {
        if (strcmp(name1,name3)<0)
        {
            cout << name1 << "\n" << name3 << "\n" << name2;
        }
        else if (strcmp(name2,name1)<0)
        {
            cout << name3 << "\n" << name2 << "\n" << name1;
        }
        else    
        {
            cout << name3 << "\n" << name1 << "\n" << name2;
        }
    }
    
    
    
    
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}