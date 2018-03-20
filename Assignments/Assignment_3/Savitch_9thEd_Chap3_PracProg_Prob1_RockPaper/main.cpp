/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 13, 2018, 12:09 PM
 * Purpose:  Play rock paper scissors
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
    char x,     //player 1 input
         y;     //player 2 input
    //Initial Variables
    
    cout<<"Lets play rock paper scissors"<<endl;
    cout<<"Input r for rock, p for paper or s for scissors"<<endl;
    cout<<"Player 1 input your choice"<<endl;
    cin>>x;
    if(x>=97){x-=32;
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    cout<<"Player 2 input your choice"<<endl;
    cin>>y;
    cout<<"----------------------------"<<endl;
    if(y>=97){y-=32;
    }
    if(x=='P'&&y=='R'){
        cout<<"Paper covers rock"<<endl<<"Player 1 wins"<<endl;
    }
    else if(x=='R'&&y=='S'){
       cout<<"Rock smashes scissors"<<endl<<"Player 1 wins"<<endl;
    }
    else if(x=='S'&&y=='P'){
       cout<<"Scissors cuts paper"<<endl<<"Player 1 wins"<<endl;
    }
    if(x=='R'&&y=='P'){
        cout<<"Paper covers rock"<<endl<<"Player 2 wins"<<endl;
    }
    else if(x=='S'&&y=='R'){
       cout<<"Rock smashes scissors"<<endl<<"Player 2 wins"<<endl;
    }
    else if(x=='P'&&y=='S'){
       cout<<"Scissors cuts paper"<<endl<<"Player 2 wins"<<endl;
    }
    if(x==y){
        cout<<"It is a tie"<<endl<<"Everyone is a loser"<<endl;
    }
    if(x!='R'&&x!='S'&&x!='P'){
        cout<<"Player 1 has input an invalid choice"<<endl;
    }
    if(y!='R'&&y!='S'&&y!='P'){
        cout<<"Player 2 has input an invalid choice"<<endl;
    }
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
    return 0;
}