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
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int totPay,pyPrDay;//Pennies of pay
    char numDays=31;//Most number of days in a month

    //Initial Variables
    pyPrDay=1;//1 penny on the first day
    totPay=pyPrDay; //Total Amount
    
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day      Pay         Total"<<endl;
    for(int day=1;day<=numDays;day++){
        cout<<setw(2)<<day
            <<setw(12)<<pyPrDay/100.0f
            <<setw(14)<<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
    
    //Exit program!
    return 0;
}