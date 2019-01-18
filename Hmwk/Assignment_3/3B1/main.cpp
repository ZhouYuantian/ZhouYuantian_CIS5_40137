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
    char a;
    char b;
    
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    cin >> a  >> b;
    switch (a)
    {
        case 'P' :
        if (b == 'R')
        cout << "Paper covers rock.";
        else if (b == 'S')
        cout << "Scissors cuts paper.";
        else if (b == 'P')
        cout << "Nobody wins.";
        break;
        case 'R' :
        if (b == 'P')
        cout << "Paper covers rock.";
        else if (b =='S')
        cout << "Rock breaks scissors.";
        else if (b =='R')
        cout << "Nobody wins.";
        break;
        case 'S' :
        if (b == 'R')
        cout << "Rock breaks scissors.";
        else if (b == 'P')
        cout << "Scissors cuts paper.";
        else if (b == 'S')
        cout << "Nobody wins.";
        break;
        default:
        break;
    }
    switch (a)
    {
        case 'p' :
        if (b == 'r')
        cout << "Paper covers rock.";
        else if (b == 's')
        cout << "Scissors cuts paper.";
        else if (b == 'p')
        cout << "Nobody wins";
        break;
        case 'r' :
        if (b == 'p')
        cout << "Paper covers rock.";
        else if (b =='s')
        cout << "Rock breaks scissors.";
        else if (b =='r')
        cout << "Nobody wins.";
        break;
        case 's' :
        if (b == 'r')
        cout << "Rock breaks scissors.";
        else if (b == 'p')
        cout << "Scissors cuts paper.";
        else if (b == 's')
        cout << "Nobody wins.";
        break;
        default:
        break;
    }
    switch (a)
    {
        case 'p' :
        if (b == 'R')
        cout << "Paper covers rock.";
        else if (b == 'S')
        cout << "Scissors cuts paper.";
        else if (b == 'P')
        cout << "Nobody wins";
        break;
        case 'r' :
        if (b == 'P')
        cout << "Paper covers rock.";
        else if (b =='S')
        cout << "Rock breaks scissors.";
        else if (b =='R')
        cout << "Nobody wins.";
        break;
        case 's' :
        if (b == 'R')
        cout << "Rock breaks scissors.";
        else if (b == 'P')
        cout << "Scissors cuts paper.";
        else if (b == 'S')
        cout << "Nobody wins.";
        break;
        default:
        break;
    }
    switch (a)
    {
        case 'P' :
        if (b == 'r')
        cout << "Paper covers rock.";
        else if (b == 's')
        cout << "Scissors cuts paper.";
        else if (b == 'p')
        cout << "Nobody wins";
        break;
        case 'R' :
        if (b == 'p')
        cout << "Paper covers rock.";
        else if (b =='s')
        cout << "Rock breaks scissors.";
        else if (b =='r')
        cout << "Nobody wins.";
        break;
        case 'S' :
        if (b == 'r')
        cout << "Rock breaks scissors.";
        else if (b == 'p')
        cout << "Scissors cuts paper.";
        else if (b == 's')
        cout << "Nobody wins.";
        break;
        default:
        break;
    }
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}