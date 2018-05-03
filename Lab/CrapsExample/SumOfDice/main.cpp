/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 3, 2018, 10:02 AM
 * Purpose:  Simulate a pair of dice
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char die1,die2;     //dice face value[1,6]
    int c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;//count of dice throws
    int toss;
    //Initial Variables
    toss=36000000;
    c2=c3=c4=c5=c6=c7=c8=c9=c10=c11=c12=0;
    
    //check the statistics
    for(int thrw=1;thrw<=toss;thrw++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        char sum=die1+die2;
        switch(sum){
            case 2:c2++;break;
            case 3:c3++;break;
            case 4:c4++;break;
            case 5:c5++;break;
            case 6:c6++;break;
            case 7:c7++;break;
            case 8:c8++;break;
            case 9:c9++;break;
            case 10:c10++;break;
            case 11:c11++;break;
            case 12:c12++;break;
            default:cout<<"Logic Error"<<endl;
        }
    }
    
    cout<<"Number of dice thrown = "<<toss<<endl;
    cout<<"Sum of 2 occurred     = "<<setw(9)<<c2<<" times"<<endl;
    cout<<"Sum of 3 occurred     = "<<setw(9)<<c3<<" times"<<endl;
    cout<<"Sum of 4 occurred     = "<<setw(9)<<c4<<" times"<<endl;
    cout<<"Sum of 5 occurred     = "<<setw(9)<<c5<<" times"<<endl;
    cout<<"Sum of 6 occurred     = "<<setw(9)<<c6<<" times"<<endl;
    cout<<"Sum of 7 occurred     = "<<setw(9)<<c7<<" times"<<endl;
    cout<<"Sum of 8 occurred     = "<<setw(9)<<c8<<" times"<<endl;
    cout<<"Sum of 9 occurred     = "<<setw(9)<<c9<<" times"<<endl;
    cout<<"Sum of 10 occurred    = "<<setw(9)<<c10<<" times"<<endl;
    cout<<"Sum of 11 occurred    = "<<setw(9)<<c11<<" times"<<endl;
    cout<<"Sum of 12 occurred    = "<<setw(9)<<c12<<" times"<<endl;
    cout<<"Number of dice thrown = "<<setw(9)
            <<c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12<<endl;
    
    //Map/Process Inputs to Outputs
    
    //Exit program!
    return 0;
}