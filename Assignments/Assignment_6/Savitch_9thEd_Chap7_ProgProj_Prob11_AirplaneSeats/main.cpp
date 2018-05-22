/* 
 * File:   CPPTemplate.cpp
 * Author: john Haller
 * Created on May 20, 2018, 9:30 PM
 * Purpose:  CPP Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    const char LETTER=4;
    const int NUMBER=7;
    char seatAry[LETTER][NUMBER];
    int numbAry[NUMBER];
    //Input or initialize values
    for(int i=0,row=0;i<NUMBER;i++,row++){
        numbAry[i]=i+1;
        for(int col=0;col<LETTER;col++){
            seatAry[col][row]=col+65;
        }
    }
    for(int disp=0;disp<NUMBER;disp++){
        cout<<numbAry[disp]<<" ";
        for(int letDisp=0;letDisp<LETTER;letDisp++){
            cout<<seatAry[letDisp][disp]<<" ";
        }cout<<endl;
    }
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

