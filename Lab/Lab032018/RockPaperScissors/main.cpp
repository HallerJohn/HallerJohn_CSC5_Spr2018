/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char p1,p2;

    //Initial Variables
    p1=rand()%3+'R';
    p1=p1>'S'?'P':p1;
    p2=rand()%3+'R';
    p2=p2>'S'?'P':p2;
    
    //players choice
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"Player 2 = "<<p2<<endl;
    //determine the winner
    if(p1==p2){
        cout<<"The game is a tie"<<endl;
    }else if(p1=='P'){
     
        if(p2=='S'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }else if(p1=='S'){
     
        if(p2=='R'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }else if(p1=='R'){
     
        if(p2=='P'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }

    //Display Outputs
    
    //Exit program!
    return 0;
}