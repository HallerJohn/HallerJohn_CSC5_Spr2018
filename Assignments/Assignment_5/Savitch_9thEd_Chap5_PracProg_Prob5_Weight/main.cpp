/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on February 13, 2018, 12:05 AM
 * Purpose: CPP Template
 *          To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void inputW();
void outputW(int,int);
float lbsToKg(int);
float ozToG(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int pounds,ounces;
    // Initial Variables
    inputW();
    cin>>pounds>>ounces;
    
    //Display Outputs
    outputW(pounds,ounces);
    //Exit program!

    return 0;
}
void inputW(){
    cout<<"Input the weight in Pounds and Ounces"<<endl;
}
void outputW(int pounds,int ounces){
    cout<<lbsToKg(pounds)<<" Kilograms and "<<ozToG(ounces)<<" Grams"<<endl;
}
float lbsToKg(int pounds){
    return pounds/2.2046;
}
float ozToG(int ounces){
    return static_cast<float>(ounces)/16/2.2046*1000;
}
