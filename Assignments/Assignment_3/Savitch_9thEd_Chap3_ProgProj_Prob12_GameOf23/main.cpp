/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 20, 2018, 10:57 PM
 * Purpose: Play a game of 23
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numPick,p1Take,cpTake;
    
    // Initial Variables
    numPick=23;
    
    //play our game
    while(numPick>4){
        int plTake;
        cout<<"How many sticks would you like to take?"<<endl;
        cin>>plTake;
        if(plTake!=1&&plTake!=2&&plTake!=3){
            cout<<"You took more than 3 sticks you cheater"<<endl;
            return 0;
        }else{
        numPick-=plTake;
        cpTake=4-plTake;
        cout<<"Your opponent took "<<cpTake<<" sticks"<<endl;
        numPick-=cpTake;
        cout<<"There is now "<<numPick<<" sticks left"<<endl;
        }
    }
    int plTake;
    cout<<"How many sticks would you like to take?"<<endl;
        cin>>plTake;
        if(plTake!=1&&plTake!=2&&plTake!=3){
            cout<<"You took more than 3 sticks you cheater"<<endl;
            return 0;
        }else{ numPick-=plTake;
    }if(numPick==4){
        cout<<"Your opponent took 3 sticks"<<endl;
        numPick-3;
        cout<<"There is now only 1 stick left"<<endl<<" "<<endl<<"You lose"
                <<endl;
    }else if(numPick==3){
        cout<<" "<<endl;
        cout<<"Your opponent took 2 sticks"<<endl;
        numPick-2;
        cout<<"There is now only 1 stick left"<<endl<<" "<<endl<<"You lose"
                <<endl;
    }else if(numPick==2){
        cout<<"Your opponent took 1 sticks"<<endl;
        numPick-1;
        cout<<"There is now only 1 stick left"<<endl<<" "<<endl<<"You lose"
                <<endl;
    }else if(numPick==1){
        cout<<"Your opponent took 1 sticks"<<endl;
        cout<<"Your opponent took the last stick"<<endl<<" "<<endl
                <<"Congratulations you win!"<<endl;
    }
    //Display Outputs
    
    //Exit program!

    return 0;
}

