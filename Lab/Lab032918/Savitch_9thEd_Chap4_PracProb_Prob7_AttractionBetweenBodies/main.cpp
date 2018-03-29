/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 29th, 2018, 11:49 AM
 * Purpose:  Attraction Between Bodies
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const float GRAVITY=6.673e-8f;       //cm^3/(g*sec^2)
const float CMTOM=0.01f;             //cm to m
const float MTOF=3.281f;              //meters to feet
const float LBSLUG=32.174f;          //pounds to slugs
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float myMass,ertMass,rEarth,myWt, myWtCnv;
    

    //Initial Variables
    myMass=6;               //in slugs
    myWtCnv=myMass*LBSLUG;
    ertMass=5.972e27f;      //in grams
    rEarth=6.371e6f;        //in meters
    
    //Map/Process Inputs to Outputs
    myWt=GRAVITY*CMTOM*CMTOM*CMTOM*myMass*ertMass*MTOF/(rEarth*rEarth);
    
    //display outputs
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" Slugs is equal to "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" Slugs is equal to "<<myWtCnv<<" lbs"<<endl;
    //Exit program!
    return 0;
}