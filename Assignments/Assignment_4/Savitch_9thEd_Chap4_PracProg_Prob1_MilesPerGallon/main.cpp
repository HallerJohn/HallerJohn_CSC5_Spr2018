/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 2, 2018, 12:05 AM
 * Purpose: Determine miles/gallon
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const float LGAL=0.264179f;

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float miles,liters,mileGal;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input how many liters of gasoline were consumed"<<endl;
        cin>>liters;
        cout<<"Input how many miles you traveled"<<endl;
        cin>>miles;
        //Map/Process Inputs to Outputs
        mileGal=miles/(liters*LGAL);
         //Display Outputs
        cout<<"Your car delivered "<<mileGal<<" miles/gallon"<<endl;
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Exit program!

    return 0;
}

