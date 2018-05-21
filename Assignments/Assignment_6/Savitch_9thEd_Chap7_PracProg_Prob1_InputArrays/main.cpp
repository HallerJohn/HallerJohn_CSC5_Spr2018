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
void firstLast2();

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    firstLast2();
    //Display Outputs

    //Exit Program!
    
    return 0;
}
void firstLast2(){
    //Declare all Variables, no doubles
    int size;
    int array[size];
    //Input or initialize values
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    //Map/Process/Calculations, Inputs to Outputs
    if(array[0]==2||array[size-1]==2){cout<<"True";}
    else{cout<<"False";}
}
