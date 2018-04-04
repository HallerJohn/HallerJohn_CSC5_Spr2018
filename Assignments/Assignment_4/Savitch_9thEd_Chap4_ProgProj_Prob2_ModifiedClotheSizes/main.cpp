 /* 
 * File:   main.cpp
 * Author: John Haller
 * Created on February 13, 2018, 12:05 AM
 * Purpose: CPP Template
 *          To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hat,jacket,waist;
    short height,weight;
    int age;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input your height in inches"<<endl;
        cin>>height;
        cout<<"Input your weight in pounds"<<endl;
        cin>>weight;
        cout<<"Input your age in years"<<endl;
        cin>>age;
        //Map/Process Inputs to Outputs
        hat=(weight/height)*2.9;
        jacket=static_cast<float>(height*weight)/288+(0.125)*((age-30)/10);
        waist=weight/5.7+(0.1)*((age-28)/2);
        //Display Outputs
        cout<<fixed<<setprecision(2);
        cout<<"Your hat size is "<<hat<<endl;
        cout<<"Your jacket size is "<<jacket<<" inches"<<endl;
        cout<<"Your waist size is "<<waist<<" inches"<<endl;
        jacket=static_cast<float>(height*weight)/288+(0.125)*((age-20)/10);
        waist=weight/5.7+(0.1)*((age-18)/2);
        cout<<"Your jacket size in 10 years will be "<<jacket<<" inches"<<endl;
        cout<<"Your waist size in 10 years will be is "<<waist<<" inches"<<endl;
        cout<<"Would you like to repeat this program? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='T'||repeat=='t');
    //Exit program!

    return 0;
}

