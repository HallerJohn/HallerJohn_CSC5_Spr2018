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
void inputW2();
void outputW2(int,int);
float lbsToKg(int);
float ozToG(int);
float kgToLbs(int);
float gToOz(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,repeat;
    float pounds,ounces,g,kg;
    // Initial Variables
    do{
        cout<<"Would you like to enter a weight in Lbs/Oz or Kg/G? [1,2]"<<endl;
        cin>>choice;

        //Calculate Weights
        if (choice=='1'){
            inputW();
            cin>>pounds>>ounces;
            outputW(pounds,ounces);
        }else if(choice=='2'){
            inputW2();
            cin>>kg>>g;
            outputW2(kg,g);
        }
        cout<<"Would you like to repeat this Program? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    
    //Exit program!

    return 0;
}
void inputW(){
    cout<<"Input the weight in Pounds and Ounces"<<endl;
}
void outputW(int pounds,int ounces){
    cout<<lbsToKg(pounds)<<" Kilograms and "<<ozToG(ounces)<<" Grams"<<endl;
}
void inputW2(){
    cout<<"Input the weight in Kilograms and Grams"<<endl;
}
void outputW2(int kg,int g){
    cout<<kgToLbs(kg)<<" Pounds and "<<gToOz(g)<<" Ounces"<<endl;
}
float lbsToKg(int pounds){
    return pounds/2.2046;
}
float ozToG(int ounces){
    return static_cast<float>(ounces)/16/2.2046*1000;
}
float kgToLbs(int kg){
    return kg*2.2046;
}
float gToOz(int g){
    return static_cast<float>(g)*16*2.2046/1000;
}

