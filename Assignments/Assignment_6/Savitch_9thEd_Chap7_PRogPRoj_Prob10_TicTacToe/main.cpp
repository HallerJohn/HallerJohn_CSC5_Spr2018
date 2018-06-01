/* 
 * File:   CPPTemplate.cpp
 * Author: john Haller
 * Created on May 25, 2018, 9:30 PM
 * Purpose:  CPP Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void rules();
void fill(char [][3],char,char);
void display(char [][3],char,char);
void play(char [][3],char,char);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    char repeat;
    const char ROW=3;
    const char COL=3;
    char array[ROW][COL];
    //Input or initialize values
    rules();
    do{
        fill(array,ROW,COL);
        display(array,ROW,COL);
        //Map/Process/Calculations, Inputs to Outputs
        play(array,ROW,COL);
        cout<<"Would you like to player again [y/n]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs

    //Exit Program!
    
    return 0;
}
void rules(){
    cout<<"This program will allow you to play a game of"
            <<" Tic Tac Toe"<<endl;
    cout<<"Starting with player 1 you will input a number 1-9 as your choice"
            <<endl;
    cout<<"You will then alternate choosing a number that has not yet"<<endl;
    cout<<"been chosen "<<endl;
    cout<<"Once a player has won input a 's' to end the game"<<endl;
}
void fill(char array[][3],char ROW,char COL){
    for(int i=0,count=49;i<ROW;i++){
        for(int j=0;j<COL;j++,count++){
            array[i][j]=count;
        }
    }
}
void display(char array[][3],char ROW,char COL){
    for(int i=0,count=49;i<ROW;i++){
        for(int j=0;j<COL;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
void play(char array[][3],char ROW,char COL){
    bool turn=true;
    char choice;
    for(int plyTurn=0;plyTurn<9;plyTurn++){
        if(turn){
            cin>>choice;
            if (choice=='S'||choice=='s')break;
            for(int i=0;i<ROW;i++){
                for(int j=0;j<COL;j++){
                    if(array[i][j]==choice){
                    array[i][j]='X';
                    }
                }
            }
            display(array,ROW,COL);
            turn=false;
        }
        else{
            cin>>choice;
            if (choice=='S'||choice=='s')break;
            for(int i=0;i<ROW;i++){
                for(int j=0;j<COL;j++){
                    if(array[i][j]==choice){
                    array[i][j]='O';
                    }
                }
            }
            display(array,ROW,COL);
            turn=true;
        }
    }
}