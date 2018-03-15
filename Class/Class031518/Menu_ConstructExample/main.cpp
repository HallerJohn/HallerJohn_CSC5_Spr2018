/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 15, 2018, 10:43 AM
 * Purpose:  Create a menu
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;

    //Initial Variables
    
    //display menu
    cout<<"Choose from the following menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch Case example"<<endl;
    cin>>choice;
    
    //Map/Process Inputs to Outputs
    if(choice>='1'&&choice<='4'){
        switch(choice){
            case'1':{
                cout<<"Independent-If Example"<<endl;
                //declare variables
                float hrsWrkd,payRate,payChk;
                //initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"And your Pay Rate in $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //calculate paycheck
                payChk=hrsWrkd*payRate;
                //if you worked >40hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //output all conditions
                cout<<"Hours worked"<<hrsWrkd<<endl;
                cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'2':{
                cout<<"Dependent-If Example"<<endl;
                //declare variables
                float hrsWrkd,payRate,payChk;
                //initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"And your Pay Rate in $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //calculate paycheck
                if(hrsWrkd>=0&&hrsWrkd<=40){
                    payChk=hrsWrkd*payRate;
                }else{
                    payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
                //output all conditions
                cout<<"Hours worked"<<hrsWrkd<<endl;
                cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'3':{
                cout<<"Ternary Op Example"<<endl;
                //declare variables
                float hrsWrkd,payRate,payChk;
                //initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"And your Pay Rate in $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //calculate paycheck
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                    hrsWrkd*payRate:
                    hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                //output all conditions
                cout<<"Hours worked"<<hrsWrkd<<endl;
                cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'4':{
                cout<<"Switch case Example"<<endl;
                //declare variables
                float hrsWrkd,payRate,payChk;
                //initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"And your Pay Rate in $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //calculate paycheck
                switch(hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                        payChk=hrsWrkd*payRate;
                        break;
                    }
                    default:{
                        payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                        break;
                    }
                }
                //output all conditions
                cout<<"Hours worked"<<hrsWrkd<<endl;
                cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
        }

    }else{
        cout<<"Exiting menu"<<endl;
    }    
    
    
    //Exit program!
    return 0;
}