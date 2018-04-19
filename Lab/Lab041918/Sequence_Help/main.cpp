/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 29th, 2018, 11:20 AM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const float PI=4*atan(1);
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;      //approximate value of pi
    int nTerms;         //number of terms

    //Initial Variables
    apprxPI=0;
    nTerms=100000;
    
    //Map/Process Inputs to Outputs
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;
        apprxPI+=(static_cast<float>(sign)/cntr);//= arctan(1)
        
    }
    apprxPI*=4;             //approximates pi
    //output
    cout<<"After "<<nTerms<<" terms the approximate Value of PI ="
            <<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    //Exit program!
    return 0;
}