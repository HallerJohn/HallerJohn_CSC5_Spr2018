/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 27, 2018, 12:06 PM
 * Purpose:  Make a calendar
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <fstream>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    int x;
    //Initial Variables
    out.open("Calendar.out");
    x=1;
    //Map/Process Inputs to Outputs
    while(x==1){
        for(int days=1;days<=31;days++){
            out<<"01/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=28;days++){
            out<<"02/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=31;days++){
            out<<"03/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=30;days++){
            out<<"04/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=31;days++){
            out<<"05/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=30;days++){
            out<<"06/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=31;days++){
            out<<"07/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=30;days++){
            out<<"08/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=31;days++){
            out<<"09/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=30;days++){
            out<<"10/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=30;days++){
            out<<"11/"<<days<<"/18"<<endl;
        }
        for(int days=1;days<=31;days++){
            out<<"12/"<<days<<"/18"<<endl;
        }break;
    }
    //Display Outputs
    out.close();
    //Exit program!
    return 0;
}