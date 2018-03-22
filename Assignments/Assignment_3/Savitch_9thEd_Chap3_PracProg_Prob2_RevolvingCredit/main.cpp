/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 21, 2018, 12:05 AM
 * Purpose: Revolving credit info
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float balance,totDue,minPay,minDet,intDue;
    
    // Initial Variables
    cout<<"Input your current account balance"<<endl;
    cin>>balance;
    
    //Map/Process Inputs to Outputs
    if(balance<=1000){
        totDue=balance*1.015;
    }
    else if(balance>1000){
        totDue=(1000*1.015)+((balance-1000)*1.01);
    }
    intDue=totDue-balance;
    if(balance<=10){
        minPay=totDue;
    }
    else if(balance>10){
        minDet=totDue*.1;
        if(minDet>10){
            minPay=minDet;
        }else if(minDet<=10){
            minPay=10;
        }
    }
    cout<<"The total amount due is    :$"<<fixed<<setprecision(2)
            <<setw(10)<<totDue<<endl;
    cout<<"The total interest paid is :$"<<fixed<<setprecision(2)
            <<setw(10)<<intDue<<endl;
    cout<<"The minimum payment is     :$"<<fixed<<setprecision(2)
            <<setw(10)<<minPay<<endl;
    
    //Display Outputs
    
    //Exit program!

    return 0;
}

