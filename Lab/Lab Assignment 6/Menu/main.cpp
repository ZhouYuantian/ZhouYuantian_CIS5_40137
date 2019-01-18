
//* File:   main.cpp
 //* Author: Yuantian Zhou
 //* Created on January 18th, 2019, 11:25 AM
 //* Purpose:  Menu
//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem
    
    //Loop Menu until exit
    do{

        //Initialize or input i.e. set variable values
        cout<<"Menu Program"<<endl;
        cout<<"Type 1 for problem 1"<<endl;
        cout<<"Type 2 for problem 2"<<endl;
        cout<<"Type 3 for problem 3"<<endl;
        cout<<"Type 4 for problem 4"<<endl;
        cout<<"Type 5 for problem 5"<<endl;
        cout<<"Type anything else to exit"<<endl;
        cin>>wchProb;

        //Solve Problems
        switch(wchProb){
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            case '5':problem5();break;
            
            default :cout<<"Exiting Menu, no problem selected"<<endl;
        }
    
    //End of Menu/problems
    }while(wchProb>='1'&&wchProb<='3');

    //Exit stage right or left!
    return 0;
}
void problem5(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"using namespace std;\n"

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    
    //Declare Variables
    <<"int a;\n"
    <<"cin >> a;\n"
    <<"for (int i=1;i<=a;i++)\n"
    <<"{\n"
      <<"  for(int j=1;j<=i;j++)\n"
      <<" {\n"
       <<" cout << \"+\";\n"
        <<"}\n"
        <<"cout << \"\\n\\n\";\n"
   <<" }\n"
     <<"for (int x=1;x<a;x++)\n"
     <<"{\n"
        <<" for(int y=a;y>=x;y--)\n"
        <<" {\n"
        <<" cout << \"+\";\n"
        <<" }\n"
         <<"cout << \"\\n\\n\";\n"
     <<"}\n"
     <<"cout << \"+\";\n"
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

   
    <<"return 0;\n"
<<"}\n"<<endl;
}
void problem4(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"using namespace std;\n"

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    <<"char a;\n"
   <<" int b;\n"
   <<" cin >> b  >> a;\n"
   <<" if (b>15)\n"
   <<" {\n"
       <<" cout << \"Please enter a number less than 15.\";\n"
    
      <<"  return 0;\n"
   <<" }\n"
    <<"for(int i = 1; i<b;i++)\n"
   <<" {\n"
     <<"   for(int j=1;j<=b;j++)\n"
      <<"  {\n"
       <<"     cout << a;\n"
       <<" }\n"
       <<" cout << \"\\n\";\n"
   <<" }\n"
   <<"for(int x=1; x<=b;x++)\n"
    <<"{\n"
    <<"    cout<<a;\n"
   <<" }\n"
    
    
    //Display the outputs

   <<" return 0;\n"
<<"}\n"<<endl;
}
void problem3(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"
<<"using namespace std;\n"

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    
    //Declare Variables
    <<"int a;\n"
    <<"int max;\n"
    <<"int min;\n"
    <<"a = 0;\n"
    
    <<"cin >> a;\n"
    <<"min=a;\n"
    <<"max=a;\n"
    <<"if (a==-99)\n"
    <<"{\n"
       <<" cout << \"Smallest number in the seriess is \" << a << \"\\n\" << \"Largest  number in the series is \" << a;\n"
       <<" return 0;\n"
    <<"}\n"
    <<"while(1)\n"
    <<"{\n"
        <<"cin >> a;\n"
       <<" if(a==-99)\n"
        <<"{\n"
            <<"break;\n"
        <<"}\n"
        <<"if(a<min)\n"
        <<"{\n"
         <<"   min=a;\n"
        <<"}\n"
        <<"if(a>max)\n"
        <<"{\n"
        <<"    max = a;\n"
       <<" }\n"
        
    <<"} \n"
    <<"cout << \"Smallest number in the series is \" << min << \"\\n\" << \"Largest  number in the series is \" << max;\n"
    
    
    //Display the outputs
    <<"return 0;\n"
<<"}\n"<<endl;
}

void problem2(){
    cout<<"#include <iostream>  //Input/Output Library\n"
<<"#include <iomanip>\n"
<<"using namespace std;\n"

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
<<"void totalday(int=0);\n"
//Execution Begins Here!
<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    
    //Declare Variables
    
    <<"int d;\n"
   <<" cin >> d;\n"
   <<" totalday(d);\n"
     <<"  return 0;\n"
    
<<"}\n"
<<"void totalday(int d)\n"
    
    <<"{\n"
    <<"double tp;\n"
    <<"double p;\n"
    <<"if(d<1)\n"
   <<" {\n"
       <<" cout << \"please enter a number more than 1.\";\n"
        <<"return;\n"
    <<"}\n"
    <<"tp = 0;\n"
    <<"p = 1;\n"
    <<"for(int i=0;i<d;i++)\n"
    <<"{\n"
       <<" tp=tp+p;\n"
       <<" p = p*2;\n"
    <<"}\n"
    <<"tp = tp / 100;\n"
    <<"cout << fixed << setprecision(2) << \"Pay = $\" << tp;\n"
   
    //Display the outputs

    
<<"}\n"<<endl;
}

void problem1(){
    cout<<"//* File:   main.cpp\n"
 //* Author: Yuantian Zhou
 //* Created on January 18th, 2019, 11:25 AM
 //* Purpose:  Sum


//System Libraries Here
<<"#include <iostream> \n" //Input/Output Library
<<"#include <math.h>\n"
<<"#include <cstdlib>\n"
<<"#include <ctime>\n"
<<"using namespace std;\n"

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
<<"int main(int argc, char** argv) {\n"
    //Set the random number seed
    <<"int a;\n"
    <<"int sum = 0;\n"
<<"cin >> a;\n"
<<"for(int i=1;i<=a;i++)\n"
<<"{\n"
     <<"sum = sum + i;\n"
<<"}\n"

<<"cout << \"Sum = \" << sum;\n"
    
   
    
    //Display the outputs

  
    <<"return 0;\n"
<<"}\n"
<<endl;
}