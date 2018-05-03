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
    //Declare Variables
    //salary in $'s/year
    //return on investment in %
    //savings required in $
    //percentage deposit in %
    float salary,roi,savReq,prcDep;//Initial Conditions
    int nYears;//number of years
    float svBegYr,//savings at beginning of year
            inEndYr,//interest earned at end of year
            dpEndYr;//deposit at end of year
    
 
    //Initial Variables
    salary=1.e5f;   //$100,000
    roi=5e-2;       //5%
    savReq=salary/roi;
    prcDep=1e-1;    //10% deposit
    nYears=50;      //50 years
    svBegYr=0;      //no savings in $'s at start
    inEndYr=0;      //no interest at beginning
    dpEndYr=prcDep*salary;//deposit at end of every year
    
    //Map/Process Inputs to Outputs
    int year=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Yea Year      Savings    Interest    Deposit"<<endl;
    for(int nYear=0;nYear<=nYears&&savReq>svBegYr;year++,nYear++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year
                <<setw(12)<<svBegYr
                <<setw(12)<<inEndYr
                <<setw(12)<<dpEndYr<<endl;
        int isvBgYr=(svBegYr+inEndYr+dpEndYr)*100;//calculates in pennies
        svBegYr=isvBgYr/100;//shifts back to dollars
        inEndYr=svBegYr*roi;
    }
    cout<<"Savings to Retire = $"<<svBegYr
            <<" in year  "<<year<<endl;
    //Output the results

    
    //Exit program!
    return 0;
}