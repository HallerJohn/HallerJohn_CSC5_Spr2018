/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 29th, 2018, 11:20 AM
 * Purpose:  Random numbers used in approximating pi
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const float PI=4*atan(1);
const float MAXRAND=pow(2,31)-1;
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float apprxPI;      //approximate value of pi
    int nDarts;         //number of darts
    int inCrcl;         //number of darts in circle

    //Initial Variables
    nDarts=10000;
    inCrcl=0;
    //Map/Process Inputs to Outputs
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MAXRAND;
        float y=rand()/MAXRAND;
        if(x*x+y*y<=1)inCrcl++;
        
    }
    apprxPI=4.0f*inCrcl/nDarts;             //approximates pi
    //output
    cout<<"After "<<nDarts<<" terms the approximate Value of PI ="
            <<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    //Exit program!
    return 0;
}