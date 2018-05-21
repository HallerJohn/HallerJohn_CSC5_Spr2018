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
void swapFrontBack();

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    //Map/Process/Calculations, Inputs to Outputs
    swapFrontBack();
    //Display Outputs
    //Exit Program!
    
    return 0;
}
void swapFrontBack(){
    //Declare all Variables, no doubles
    int size;
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    int array[size];
    //Input or initialize values
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int temp;
    temp=array[0];
    array[0]=array[size-1];
    array[size-1]=temp;
    cout<<"The first element is now "<<array[0]<<endl;
    cout<<"The last element is now "<<array[size-1]<<endl;
    //Map/Process/Calculations, Inputs to Outputs
}
