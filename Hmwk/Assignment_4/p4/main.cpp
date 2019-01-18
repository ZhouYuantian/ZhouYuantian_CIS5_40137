#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    char a;
    int b;
    cin >> b  >> a;
    if (b>15)
    {
        cout << "Please enter a number less than 15.";
    
        return 0;
    }
    for(int i = 1; i<b;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout << a;
        }
        cout << "\n";
    }
    for(int x=1; x<=b;x++)
    {
        cout<<a;
    }
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}