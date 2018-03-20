/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 20, 2018, 12:05 PM
 * Purpose:  Green crud with Fibonacci
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fn,fnm1,fnm2,intCrud,days;

    //Initial Variables
    fnm2=1;
    fnm1=1;
    intCrud=10;
    days=0;
    
    //print out the first 2 in the sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //calculate third element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate fourth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate fifth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate sixth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate seventh element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate eighth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate ninth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    
    //Exit program!
    return 0;
}