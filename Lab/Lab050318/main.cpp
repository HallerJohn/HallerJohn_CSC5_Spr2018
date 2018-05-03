/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 3, 2018, 11:20 AM
 * Purpose:  Retirement Fund
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
    int iniCost,//initial cost in $'s
            months;//number of months
    float intRate,//interest rate in %
            downPay,//down payment in $'s
            regist,//registration fee %
            taxRate,//tax rate %
            mnthPay,//mnthly payment in $
            totCost,//total cost in $'s
            balloon,//balloon payment in $'s
            interest,//interest payment
            loanAmt;//amount left to pay
 
    //Initial Variables
    iniCost=4e4f;
    months=36;
    intRate=0.02;
    downPay=.10;
    regist=0.02;
    taxRate=0.08;
    mnthPay=1145.71;
    loanAmt=iniCost;
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Month "<<"Loan Amount "<<"Interest "<<"Monthly Payment"<<endl;
    for(int month=0;month<=months&&loanAmt>=0;month++){
        cout<<setw(4)<<month<<"    "<<setw(8)<<loanAmt<<"   "<<setw(6)<<interest
                <<"          "<<setw(6)<<mnthPay<<endl;
        interest=loanAmt*intRate/12;
        loanAmt=loanAmt+interest-mnthPay;
    }
    //Output the results
cout<<setw(4)<<36<<"    "<<setw(8)<<loanAmt<<"   "<<setw(6)<<interest
                <<"          "<<setw(6)<<mnthPay<<endl;
cout<<"Your monthly payment is = $"<<mnthPay<<endl;
    //Exit program!
    return 0;
}