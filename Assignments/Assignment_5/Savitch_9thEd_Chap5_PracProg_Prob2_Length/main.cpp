/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 4, 2018, 6:15 PM
 * Purpose: Convert lengths
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float ftToM(int);
float inToCm(int);
void input();
void output(int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float feet,inches;
    // Initial Variables
    input();
    cin>>feet>>inches;
    //Calculate length and output results
    output(feet,inches);
    //Exit program!

    return 0;
}
void input(){
    cout<<"Input the length in Feet and Inches"<<endl;
}
void output(int feet,int inches){
    cout<<ftToM(feet)<<" Meters and "<<inToCm(inches)<<" Centimeters"<<endl;
}
float ftToM(int feet){
    return static_cast<float>(feet)*0.3048;
}
float inToCm(int inches){
    return static_cast<float>(inches)/12*0.3048*100;
}