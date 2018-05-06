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
void inputW2();
void outputW2(int,int);
float kgToLbs(int);
float gToOz(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int kg,g;
    // Initial Variables
    inputW2();
    cin>>kg>>g;
    
    //Display Outputs
    outputW2(kg,g);
    //Exit program!

    return 0;
}
void inputW2(){
    cout<<"Input the weight in Kilograms and Grams"<<endl;
}
void outputW2(int kg,int g){
    cout<<kgToLbs(kg)<<" Pounds and "<<gToOz(g)<<" Ounces"<<endl;
}
float kgToLbs(int kg){
    return kg*2.2046;
}
float gToOz(int g){
    return static_cast<float>(g)*16*2.2046/1000;
}
