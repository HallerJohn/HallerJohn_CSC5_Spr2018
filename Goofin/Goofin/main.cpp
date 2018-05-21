/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on February 13, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int size=52;
    int deck[size];
    //Initialize Variables
    for(int i=0;i<size;i++){
        deck[i]=rand()%52+1;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<deck[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}