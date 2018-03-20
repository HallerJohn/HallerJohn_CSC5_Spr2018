/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on March 20, 2018, 12:05 PM
 * Purpose:  Find all prime number 1-100
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random number seed
   srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nLoops=100;
    bool prime;     //determine if num2Tst is prime
    
    //Initialize Variables
    
    //Calculate the answer
    for(int num2Tst=2;num2Tst<=nLoops;num2Tst++){
        prime=true;
        for(int i=2;i<=sqrt(nLoops);i++){
            prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
        }
                  //Output data
        cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    }
    
    //Exit program!
    return 0;
}