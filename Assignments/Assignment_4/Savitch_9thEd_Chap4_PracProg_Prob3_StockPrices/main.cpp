/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 29, 2018, 10:18 AM
 * Purpose:  Stock purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //format
#include <cstdlib>  //rand function
#include <ctime>    //set time
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk; //stock price % num/den
    int numShrs;                //number of shares
    float valStk;               //value of the stocks in $'s
    char again;                 //determine if we repeat the program

    //Initial Variables
    denStk=8;
    
    //Map/Process Inputs to Outputs
    do{
        //Randomly choose stock price
        dolStk=rand()%1000;     //0-999
        numStk=rand()%8;        //(0-7)/8
        numShrs=rand()%90+10;   //10-99
        
        //calculate the stock value
        valStk=numShrs*(dolStk+static_cast<float>(numStk)/denStk);

    //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The number of shares of stock = "<<numShrs<<endl;
        cout<<"The value of each stock/share = $"<<dolStk<<" "<<numStk
                <<"/"<<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStk<<endl;
        //prompt user to see if they want to continue
        cout<<endl<<"Would you like to continue?[Y/N]"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');
    
    //Exit program!
    return 0;
}