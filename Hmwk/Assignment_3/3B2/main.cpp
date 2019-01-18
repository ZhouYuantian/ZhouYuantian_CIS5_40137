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
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int SIZE = 100;
    char a[SIZE];
    char b[SIZE];
    char c[]="Aries";
    char d[]="Leo";
    char e[]="Sagittarius";
    char f[]="Taurus";
    char g[]="Virgo";
    char h[]="Capricorn";
    char i[]="Gemini";
    char j[]="Libra";
    char k[]="Aquarius";
    char l[]="Cancer";
    char m[]="Scorpio";
    char n[]="Pisces";
    
    

    cout << "Horoscope Program which examines compatible signs.\n";
    cout << "Input 2 signs.\n";
    cin >> a  >> b;
     if(strcmp(a,c)==0)
    {
        if(strcmp(b,d)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }  
        else if(strcmp(b,e)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
        else if(strcmp(a,d)==0)
    {
        if(strcmp(b,c)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }  
        else if(strcmp(b,e)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,e)==0)
    {
        if(strcmp(b,c)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }  
        else if(strcmp(b,d)==0)
        {
            cout << a << " and " << b << " are compatible Fire signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,f)==0)
    {
        if(strcmp(b,g)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }  
        else if(strcmp(b,h)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,g)==0)
    {
        if(strcmp(b,f)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }  
        else if(strcmp(b,h)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,h)==0)
    {
        if(strcmp(b,f)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }  
        else if(strcmp(b,g)==0)
        {
            cout << a << " and " << b << " are compatible Earth signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,i)==0)
    {
        if(strcmp(b,j)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }  
        else if(strcmp(b,k)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,j)==0)
    {
        if(strcmp(b,i)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }  
        else if(strcmp(b,k)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
        else if(strcmp(a,k)==0)
    {
        if(strcmp(b,i)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }  
        else if(strcmp(b,j)==0)
        {
            cout << a << " and " << b << " are compatible Air signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,l)==0)
    {
        if(strcmp(b,m)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }  
        else if(strcmp(b,n)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,m)==0)
    {
        if(strcmp(b,l)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }  
        else if(strcmp(b,n)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
     else if(strcmp(a,n)==0)
    {
        if(strcmp(b,l)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }  
        else if(strcmp(b,m)==0)
        {
            cout << a << " and " << b << " are compatible Water signs.";
        }
        else
        {
            cout << a << " and " << b << " are not compatible signs.";
        }
        
    }
    return 0;
}
   