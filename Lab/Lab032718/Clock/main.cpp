/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 27, 2018, 11:14 AM
 * Purpose:  
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
    //open file
    out.open("Time.out");
    //Initial Variables
    for(int ampm=0;ampm<1;ampm++){
        for(int hours=0;hours<=11;hours++){
            for(int mins=0;mins<=59;mins++){
                for(int secs=0;secs<=59;secs++){
                    if(hours<10){
                        out<<"0"<<hours<<":";
                    }
                    else if(hours>=10){
                        out<<hours<<":";
                    }
                    if(mins<10){
                        out<<"0"<<mins<<":";
                    }
                    else if(mins>=10){
                        out<<mins<<":";
                    }
                    if(secs<10){
                        out<<"0"<<secs<<" AM"<<endl;
                    }
                    else if(secs>=10){
                        out<<secs<<" AM"<<endl;
                    }
                }
            }
        }
    }
    for(int ampm=0;ampm<1;ampm++){
        for(int hours=12;hours==12;hours++){
            for(int mins=0;mins<=59;mins++){
                for(int secs=0;secs<=59;secs++){
                    if(hours<10){
                        out<<"0"<<hours<<":";
                    }
                    else if(hours>=10){
                        out<<hours<<":";
                    }
                    if(mins<10){
                        out<<"0"<<mins<<":";
                    }
                    else if(mins>=10){
                        out<<mins<<":";
                    }
                    if(secs<10){
                        out<<"0"<<secs<<" PM"<<endl;
                    }
                    else if(secs>=10){
                        out<<secs<<" PM"<<endl;
                    }
                }
            }
        }
    }
    for(int ampm=0;ampm<1;ampm++){
        for(int hours=0;hours<=11;hours++){
            for(int mins=0;mins<=59;mins++){
                for(int secs=0;secs<=59;secs++){
                    if(hours<10){
                        out<<"0"<<hours<<":";
                    }
                    else if(hours>=10){
                        out<<hours<<":";
                    }
                    if(mins<10){
                        out<<"0"<<mins<<":";
                    }
                    else if(mins>=10){
                        out<<mins<<":";
                    }
                    if(secs<10){
                        out<<"0"<<secs<<" PM"<<endl;
                    }
                    else if(secs>=10){
                        out<<secs<<" PM"<<endl;
                    }
                }
            }
        }
    }
    for(int ampm=0;ampm<1;ampm++){
        for(int hours=12;hours==12;hours++){
            for(int mins=0;mins<=59;mins++){
                for(int secs=0;secs<=59;secs++){
                    if(hours<10){
                        out<<"0"<<hours<<":";
                    }
                    else if(hours>=10){
                        out<<hours<<":";
                    }
                    if(mins<10){
                        out<<"0"<<mins<<":";
                    }
                    else if(mins>=10){
                        out<<mins<<":";
                    }
                    if(secs<10){
                        out<<"0"<<secs<<" AM"<<endl;
                    }
                    else if(secs>=10){
                        out<<secs<<" AM"<<endl;
                    }
                }
            }
        }
    }out<<"00:00:00 AM"<<endl;
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    //close file
    out.close();
    
    //Exit program!
    return 0;
}