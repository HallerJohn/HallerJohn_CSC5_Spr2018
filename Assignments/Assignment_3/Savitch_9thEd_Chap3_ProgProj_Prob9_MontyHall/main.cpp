/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 22, 2018, 12:05 AM
 * Purpose: CPP Template
 *          To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <cstdlib>
#include <ctime>

using namespace std;//namespace I/O stream library created
//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed random number generator
srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
float games,
        stayWin,        //times won when keeping door
        moveWin,        //times won when switched door
        drChose,        //first door chosen
        drWin,          //winning door
        drRev,          //door which was revealed
        drRem,          //remaining door
        choice;         //choice to switch or not
    // Initial Variables
games=0;
stayWin=0;
moveWin=0;
    
    //Map/Process Inputs to Outputs
do{
    drChose=rand()%3+1;
    drWin=rand()%3+1;
    do{
        drRev=rand()%3+1;
    }while(drRev==drChose||drRev==drWin);
    do{
        drRem=rand()%3+1;
    }while(drRem==drChose||drRem==drRev);
    choice=rand()%2+1;
    if(choice==1){
        if(drChose==drWin){
            stayWin++;
        }
    }
    if(choice==2){
        if(drRem==drWin){
            moveWin++;
        }
    }
    games++;
}while(games<10000);
    //Display Outputs
cout<<"Out of 10000 games keeping your original choice won "<<stayWin
        <<" times, while switching won "<<moveWin<<" times."<<endl;
cout<<"Keeping won "<<stayWin/100<<"% of the time, and Switching won "<<
        moveWin/100<<"% of the time"<<endl;
    //Exit program!

    return 0;
}

