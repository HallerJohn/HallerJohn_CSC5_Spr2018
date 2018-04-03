/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 3, 2018, 10:02 AM
 * Purpose:  Create a random number between 0 and 1
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int loop;
    float minRand,maxRand;
    
    //Initial Variables
    loop=1000000;
    maxRand=minRand=static_cast<float>(rand())/MAXRAND;
    for(int i=1;i<=loop;i++){
        float random=static_cast<float>(rand())/MAXRAND;
        if(maxRand<random)maxRand=random;
        if(minRand>random)minRand=random;
    }
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(5)<<showpoint;
    cout<<"Number of random functions calls = "<<loop<<endl;
    cout<<"The Minimum random number detected = "<<minRand<<endl;
    cout<<"The maximum random number detected = "<<maxRand<<endl;
    //Exit program!
    return 0;
}