/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on April 24, 2018, 11:04 AM
 * Purpose:  Calculate Change
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>    //Math library
#include <iomanip>  //Formatting library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int DOLSPEN=100;  //conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int numCoin(int,int);   //calculates number of coins
int rmnder(int,int);    //remainder after subtracting coins

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price,
            amtTndr;
    int pennies,
            n25,n10,n5,n1;
    
    //Input or initialize values Here
    price=9.14f;        //price is $9.14
    amtTndr=10.00f;     //amount paid
    pennies=(amtTndr-price+0.005)*DOLSPEN;
    
    //otuput initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The item price is = $"<<price<<endl;
    cout<<"The amount tendered = $"<<amtTndr<<endl;
    cout<<"Change return = "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    
    n25=numCoin(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmnder(pennies,PENNY);
    
    
    //Output Located Here
    
    cout<<"Number of quarters   = "<<n25<<endl;
    cout<<"Number of dimes      = "<<n10<<endl;
    cout<<"Number of nickels    = "<<n5<<endl;
    cout<<"Number of pennies    = "<<n1<<endl;

    //Exit
    return 0;
}
//000000111111222222333333444444555555666666777777888888999999112233445566778899
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              Future Value Functions
//Inputs;
//      
//     
//      
//Outputs:
//      
//000000111111222222333333444444555555666666777777888888999999112233445566778899
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int numCoin(int pennies, int denom){
    return pennies/denom;   //return number of coins of that denomination
}
int rmnder(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}