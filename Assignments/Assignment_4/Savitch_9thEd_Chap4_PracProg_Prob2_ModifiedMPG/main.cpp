/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 2, 2018, 12:05 AM
 * Purpose: Determine miles/gallon
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const float LGAL=0.264179f;

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float miles1,liters1,milGal1,miles2,liters2,milGal2;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input how many liters of gasoline were consumed for car 1"<<endl;
        cin>>liters1;
        cout<<"Input how many miles you traveled in car 1"<<endl;
        cin>>miles1;
        //Map/Process Inputs to Outputs
        milGal1=miles1/(liters1*LGAL);
        cout<<"Input how many liters of gasoline were consumed for car 2"<<endl;
        cin>>liters2;
        cout<<"Input how many miles you traveled in car 2"<<endl;
        cin>>miles2;
        milGal2=miles2/(liters2*LGAL);
         //Display Outputs
        cout<<fixed<<setprecision(2);
        cout<<"Car 1 delivered "<<milGal1<<" miles/gallon"<<endl;
        cout<<"Car 2 delivered "<<milGal2<<" miles/gallon"<<endl;
        if(milGal1>milGal2)cout<<"Car 1 is more efficient"<<endl;
        else if(milGal1<milGal2)cout<<"Car 2 is more efficient"<<endl;
        else if(milGal1==milGal2)cout<<"Both cars have the same efficiency"
                <<endl;
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Exit program!

    return 0;
}

