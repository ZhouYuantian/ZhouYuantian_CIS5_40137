#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void totalday(int=0);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    int d;
    cin >> d;
    totalday(d);
       return 0;
    
}
void totalday(int d)
    
    {
    double tp;
    double p;
    if(d<1)
    {
        cout << "please enter a number more than 1.";
        return;
    }
    tp = 0;
    p = 1;
    for(int i=0;i<d;i++)
    {
        tp=tp+p;
        p = p*2;
    }
    tp = tp / 100;
    cout << fixed << setprecision(2) << "Pay = $" << tp;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    
}