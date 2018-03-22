/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 22, 2018, 9:39 AM
 * Purpose:  
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //seed random generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int a,b,c,d,count;      //answer is 9837
    //Initial Variables
    count=1;
    do{
        do{
            do{
                do{
                    a=rand()%10;
                    b=rand()%10;
                    c=rand()%10;
                    d=rand()%10;
                }while(a==b||a==c||a==d||b==c||b==d||c==d);
            }while(a!=3*c);
        }while(d%2==0);
    }while(a+b+c+d!=27);
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<a<<b<<c<<d;
    //Exit program!
    return 0;
}