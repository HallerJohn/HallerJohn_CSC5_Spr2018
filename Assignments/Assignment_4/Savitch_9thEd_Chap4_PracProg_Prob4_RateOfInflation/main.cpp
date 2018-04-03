/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 03, 2018, 11:20 AM
 * Purpose:  Calculate rate of inflation
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float oldPric,newPric,infRate,costDif;
    char repeat;
    //Initial Variables
    do{
        cout<<"Input the cost of the item 1 year ago"<<endl;
        cin>>oldPric;
        cout<<"Enter the current price of the item"<<endl;
        cin>>newPric;
        //Map/Process Inputs to Outputs
        costDif=newPric-oldPric;
        infRate=costDif/oldPric*100;
        //display outputs
        cout<<"The price of the item 1 year ago is = $"<<oldPric<<endl;
        cout<<"The current price of the item is    = $"<<newPric<<endl;
        cout<<"The rate of inflation is            = "<<fixed<<setprecision(2)
                <<showpoint<<infRate<<"%"<<endl;
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Exit program!
    return 0;
}