/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on April 26, 2018, 11:25 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>    //Math library
#include <iomanip>  //Formatting library
#include <cstdlib>  //exit() function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVPERC=1e2f;//100
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float fval1(float,float,int);       //Future value with power function
float fval2(float,float,int);       //Future value with log/exponential function
float fval3(float,float,int);       //Future value with for loop
float fval4(float,float,int);       //Future value by Recursion
float fval5(float,float,int=12);    //Future value by default parameter
float fval4(float,float,float);     //Future value by overloading function
float fval6(float,float,int,int &); //Future value by static var and ref par
float fval7(float,float,int);       //Future value by exit function


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,      //Present value in dollars
            intRate;    //Interest rate in %
    int numCmp;         //Number of compounding periods in yrs
            
    //Input or initialize values Here
    presVal=1e2f;//$100
    intRate=6;   //6%
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present value = $"<<presVal<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"The number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Savings using FV -> Power              = $"
            <<fval1(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Log/Exp            = $"
            <<fval2(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> For Loop           = $"
            <<fval3(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Recursion          = $"
            <<fval4(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Default            = $"
            <<fval5(presVal,intRate/CNVPERC)<<endl;
    float fnumCmp=numCmp;
    cout<<"Savings using FV -> Overloaded         = $"
            <<fval4(presVal,intRate/CNVPERC,fnumCmp)<<endl;
    int count;
    for(int i=1;i<=4;i++){
        fval6(presVal,intRate/CNVPERC,fnumCmp,count);
    }
    cout<<"Savings using FV -> Static & Reference = $"
            <<fval6(presVal,intRate/CNVPERC,fnumCmp,count)<<endl;
    cout<<"fVal6 was called "<<count<<" times"<<endl;
    cout<<"Savings using FV -> Exit               = $"
            <<fval7(presVal,intRate/CNVPERC,numCmp)<<endl;

    //Exit
    return 0;
}
//000000111111222222333333444444555555666666777777888888999999112233445566778899
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              Future Value Functions
//Inputs;
//      pv -> present value in $'s
//      ir -> interest rate in decimal value
//      n  -> number of compounding periods (yrs)
//Outputs:
//      fv -> future value in $'s
//000000111111222222333333444444555555666666777777888888999999112233445566778899
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float fval1(float pv,float ir,int n){
    return pv*pow((1+ir),n);
}
float fval2(float pv,float ir,int n){
    return pv*exp(n*log(1+ir));
}
float fval3(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}
float fval4(float pv,float ir,int n){
    if(n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
}
float fval5(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}
float fval4(float pv,float ir,float n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}
float fval6(float pv,float ir,int n,int &cnt){
    static int count;   //Default initialized to 0
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    //Returns the count through the parameter list
    cnt=++count;        //Increment the count each function call
    return pv;
}
float fval7(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    if (n==12){
        cout<<"Future Value = $"<<pv<<endl;
        exit(0);
    }
    return pv;
}
