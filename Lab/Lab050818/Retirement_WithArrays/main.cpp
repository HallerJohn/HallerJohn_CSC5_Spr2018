/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 8, 2018, 11:26 AM
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
    const int NYRS=100;//number of years
    int nYears;//numbe of years used in array
    float svBegYr[NYRS],//savings at beginning of year
            inEndYr[NYRS],//interest earned at end of year
            dpEndYr[NYRS];//deposit at end of year
    int year[NYRS];
 
    //Initial Variables
    salary=1.e5f;   //$100,000
    roi=5e-2;       //5%
    savReq=salary/roi;
    prcDep=1e-1;    //10% deposit
    nYears=50;      //50 years
    svBegYr[0]=0;      //no savings in $'s at start
    inEndYr[0]=0;      //no interest at beginning
    dpEndYr[0]=prcDep*salary;//deposit at end of every year
    
    //Map/Process Inputs to Outputs
    int nYear;
    year[0]=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Yea Year      Savings    Interest    Deposit"<<endl;
    for(nYear=0;nYear<=nYears&&savReq>svBegYr[nYear];
            nYear++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year[nYear]
                <<setw(12)<<svBegYr[nYear]
                <<setw(12)<<inEndYr[nYear]
                <<setw(12)<<dpEndYr[nYear]<<endl;
        int isvBgYr=(svBegYr[nYear]+inEndYr[nYear]+dpEndYr[nYear])*100;//calculates in pennies
        year[nYear+1]=year[nYear]+1;
        svBegYr[nYear+1]=isvBgYr/100;//shifts back to dollars
        dpEndYr[nYear+1]=dpEndYr[nYear];
        inEndYr[nYear+1]=svBegYr[nYear+1]*roi;
    }
   
    cout<<"Savings to Retire = $"<<svBegYr[nYear]<<" in year "
            <<year[nYear]<<endl;
    
    //Exit program!
    return 0;
}