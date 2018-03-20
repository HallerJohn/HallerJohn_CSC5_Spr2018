/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 20, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fn,fnm1,fnm2;

    //Initial Variables
    fnm2=1;
    fnm1=1;
    
    //print out the first 2 in the sequence
    cout<<"Fibonacci Sequence"<<endl;
    cout<<"{"<<fnm2<<","<<fnm1;
    
    //calculate third element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate fourth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate fifth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate sixth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate seventh element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate eighth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    //calculate ninth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn<<"}"<<endl;
    
    
    //Exit program!
    return 0;
}