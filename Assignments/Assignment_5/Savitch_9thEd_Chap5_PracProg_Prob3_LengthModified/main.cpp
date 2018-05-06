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
float mToFt(int);
float cmToIn(int);
void input();
void output(int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float m,cm;
    // Initial Variables
    input();
    cin>>m>>cm;
    //Calculate length and output results
    output(m,cm);
    //Exit program!

    return 0;
}
void input(){
    cout<<"Input the length in Meters and Centimeters"<<endl;
}
void output(int m,int cm){
    cout<<mToFt(m)<<" Feet and "<<cmToIn(cm)<<" Inches"<<endl;
}
float mToFt(int m){
    return static_cast<float>(m)/0.3048;
}
float cmToIn(int cm){
    return static_cast<float>(cm)/100/0.3048*12;
}