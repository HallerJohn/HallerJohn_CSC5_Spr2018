/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  shapes
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char shape;
    int size;
    
    //Input or initialize values Here
    shape='x';
    size=11;
    
    //Output Located Here
    if(shape=='x'&&size%2==1){
        for(int row=1;row<=size;row++){
            for(int col=1;col<=size;col++){
                if(row==col)cout<<size+1-row;
                else if(row+col==size+1)cout<<row;
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    else if(shape=='x'&&size%2==0){
        for(int row=1;row<=size;row++){
            for(int col=1;col<=size;col++){
                if(row==col)cout<<row;
                else if(row+col==size+1)cout<<size+1-row;
                else cout<<" ";
            }
            cout<<endl;
        }
    }

    //Exit
    return 0;
}

