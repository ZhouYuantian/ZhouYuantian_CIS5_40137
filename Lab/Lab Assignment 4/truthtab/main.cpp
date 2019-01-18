#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y "<<
          " !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<" "
        <<(x||y?'T':'F')<<"  "
        <<(x^y?'T':'F')<<"  "
        <<(x^y^x?'T':'F')<<" "
        <<(x^y^y?'T':'F')<<" "
        <<(!(x&&y)?'T':'F')<<" "
        <<((!x||!y)?'T':'F')<<" "
        <<(!(x||y)?'T':'F')<<"  "
        <<((!x&&!y)?'T':'F')<<" "    
            
            <<endl;
    
    //Second Row
     x=true;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<" "
        <<(x||y?'T':'F')<<"  "
        <<(x^y?'T':'F')<<"  "
        <<(x^y^x?'T':'F')<<" "
        <<(x^y^y?'T':'F')<<" "
        <<(!(x&&y)?'T':'F')<<" "
        <<((!x||!y)?'T':'F')<<" "
        <<(!(x||y)?'T':'F')<<"  "
        <<((!x&&!y)?'T':'F')<<" "    
            
            <<endl;
     x=false;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<" "
        <<(x||y?'T':'F')<<"  "
        <<(x^y?'T':'F')<<"  "
        <<(x^y^x?'T':'F')<<" "
        <<(x^y^y?'T':'F')<<" "
        <<(!(x&&y)?'T':'F')<<" "
        <<((!x||!y)?'T':'F')<<" "
        <<(!(x||y)?'T':'F')<<"  "
        <<((!x&&!y)?'T':'F')<<" "    
            
            <<endl;
    
     x=false;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<" "
        <<(x||y?'T':'F')<<"  "
        <<(x^y?'T':'F')<<"  "
        <<(x^y^x?'T':'F')<<" "
        <<(x^y^y?'T':'F')<<" "
        <<(!(x&&y)?'T':'F')<<" "
        <<((!x||!y)?'T':'F')<<" "
        <<(!(x||y)?'T':'F')<<"  "
        <<((!x&&!y)?'T':'F')<<" "    
            
            <<endl;
    return 0;
}
