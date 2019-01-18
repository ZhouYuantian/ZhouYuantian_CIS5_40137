#include <iostream>  //Input/Output Library
#include <cstring>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int hour;
    char pack;
    double bill;
    cout << "ISP Bill\n";
    cout << "Input Package and Hours\n";
    cin >> pack  >> hour;
    if (hour > 744)
    {
     cout << "Validation";
    }
    else
    {
     switch (pack)
     {
        case 'A':
        
        if (hour > 10)
        {
         bill = 9.95 + ((hour - 10) * 2);
         cout << fixed << setprecision(2) << "Bill = $" << setw(6) << bill;
        }
        else
        
        {
          bill = 9.95;
           cout << fixed << setprecision(2) << "Bill = $" << setw(6) << bill;
        }
        break;
        case 'B':
        if (hour > 20)
        {
        bill = 14.95 + (hour - 20);
        cout << fixed << setprecision(2) << "Bill = $" << setw(6) << bill;
        }
        else
        {
        bill = 14.95;
        cout << fixed << setprecision(2) << "Bill = $" << setw(6) << bill;
        }
        break;
        case 'C':
        bill = 19.95;
        cout << fixed << setprecision(2)  << "Bill = $" << setw(6) << bill;
        break;
        default :
        cout << "Validation";
        break;
      }
    }
  return 0;
}
