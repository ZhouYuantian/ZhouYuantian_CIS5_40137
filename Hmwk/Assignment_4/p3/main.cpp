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
    int a;
    int max;
    int min;
    a = 0;
    
    cin >> a;
    min=a;
    max=a;
    if (a==-99)
    {
        cout << "Smallest number in the seriess is " << a << "\n" << "Largest  number in the series is " << a;
        return 0;
    }
    while(1)
    {
        cin >> a;
        if(a==-99)
        {
            break;
        }
        if(a<min)
        {
            min=a;
        }
        if(a>max)
        {
            max = a;
        }
        
    } 
    cout << "Smallest number in the series is " << min << "\n" << "Largest  number in the series is " << max;
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}