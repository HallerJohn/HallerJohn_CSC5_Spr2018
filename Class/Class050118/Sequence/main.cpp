/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 1, 2016, 9:07 AM
 * Purpose:  Sequence
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nterms;
    float x,seqVal,delta;
    
    //Input or initialize values Here
    nterms=10;
    x=1;
    seqVal=x;
    delta=1;
    
    //Process/Calculations Here
    for(int term=2,cnt=3;term<=nterms;term++,cnt+=2){
        delta*=(-x*x)/cnt/(cnt-1);
        seqVal+=delta;
    }
    
    //Output Located Here
    cout<<"The sin("<<x<<") ="<<sin(x)<<endl;
    cout<<"The sequence value = "<<seqVal<<" for "<<nterms<<" terms"<<endl;

    //Exit
    return 0;
}

