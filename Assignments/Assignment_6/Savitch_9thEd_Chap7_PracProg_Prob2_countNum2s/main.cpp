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
void countNum2s();

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    countNum2s();
    //Display Outputs

    //Exit Program!
    
    return 0;
}
void countNum2s(){
    //Declare all Variables, no doubles
    int size,count2;
    int array[size];
    //Input or initialize values
    count2=0;
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
        if(array[i]==2)count2++;
    }
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"There were "<<count2<<" 2s in this array"<<endl;
}
