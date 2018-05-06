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
float mToFt(int);
float cmToIn(int);
void input();
void output(int,int);
void input2();
void output2(int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,repeat;
    float m,cm,ft,in;
    // Initial Variables
    do{
        cout<<"Would you like to input M/CM(1) or Ft/In(2)"<<endl;
        cin>>choice;
        if (choice=='1'){
            input();
            cin>>m>>cm;
            output(m,cm);
        }else if(choice=='2'){
            input2();
            cin>>ft>>in;
            output2(ft,in);
        }
        cout<<"Would you like to repeat this process? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Calculate length and output results
    
    //Exit program!

    return 0;
}
void input(){
    cout<<"Input the length in Meters and Centimeters"<<endl;
}
void output(int m,int cm){
    cout<<mToFt(m)<<" Feet and "<<cmToIn(cm)<<" Inches"<<endl;
}
void input2(){
    cout<<"Input the length in Feet and Inches"<<endl;
}
void output2(int feet,int inches){
    cout<<ftToM(feet)<<" Meters and "<<inToCm(inches)<<" Centimeters"<<endl;
}
float mToFt(int m){
    return static_cast<float>(m)/0.3048;
}
float cmToIn(int cm){
    return static_cast<float>(cm)/100/0.3048*12;
}
float ftToM(int feet){
    return static_cast<float>(feet)*0.3048;
}
float inToCm(int inches){
    return static_cast<float>(inches)/12*0.3048*100;
}