/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 27, 2018, 10:11 PM
 * Purpose: Menu for Assignment 6
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes
//Functions for Menu////////////////////////////////////////////////////////////
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void firstLast2();//Problem 1
void countNum2s();//Problem 2
void swpFtBk();//Problem 3
//Functions for Problem 4
void rules();
void fill(char [][3],char,char);
void display(char [][3],char,char);
void play(char [][3],char,char);
//*********************************
void fstLst2();//Problem 5
void spFtBkV();//Problem 6

//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare Variables
    char choice,repeat;
    // Initial Variables
    do{
        menu();
        cin>>choice;
        //Map/Process Inputs to Outputs
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
        }
        cout<<endl<<"Would you like to return to the menu? [Y,N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    
    //Exit program!

    return 0;
}
//Functions for Menu////////////////////////////////////////////////////////////
void menu(){
    cout<<"Input 1 for Savitch_9thEd_Chap7_PracProg_Prob1_InputArrays"
            <<endl;
    cout<<"Input 2 for Savitch_9thEd_Chap7_PracProg_Prob2_countNum2s"
            <<endl;
    cout<<"Input 3 for Savitch_9thEd_Chap7_PracProg_Prob3_swapFrontBack"
            <<endl;
    cout<<"Input 4 for Savitch_9thEd_Chap7_PRogPRoj_Prob10_TicTacToe"
            <<endl;
    cout<<"Input 5 for Savitch_9thEd_Chap8_PracProg_Prob4_FirstLast2Vector"
            <<endl;
    cout<<"Input 6 for Savitch_9thEd_Chap8_PracProg_Prob5_SwapFrontBackVector"
            <<endl;
    
}
void prob1(){       //Problem 1
    firstLast2();
}
void prob2(){       //Problem 2
    countNum2s();
}
void prob3(){       //Problem 3
    swpFtBk();
}
void prob4(){       //Problem 4
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
}
void prob5(){       //Problem 5
    fstLst2();
}
void prob6(){       //Problem 6
    spFtBkV();
}

void firstLast2(){//problem 1
    //Declare all Variables, no doubles
    int size;
    int array[size];
    //Input or initialize values
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    //Map/Process/Calculations, Inputs to Outputs
    if(array[0]==2||array[size-1]==2){cout<<"True";}
    else{cout<<"False";}
}
void countNum2s(){//Problem 2
    //Declare all Variables, no doubles
    int size,count2;
    int array[size];
    //Input or initialize values
    count2=0;
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
        if(array[i]==2)count2++;
    }
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"There were "<<count2<<" 2s in this array"<<endl;
}
void swpFtBk(){//Problem 3
    //Declare all Variables, no doubles
    int size;
    cout<<"Input the size of the array as an integer"<<endl;
    cin>>size;
    int array[size];
    //Input or initialize values
    cout<<"Now input different integers that will be held in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int temp;
    temp=array[0];
    array[0]=array[size-1];
    array[size-1]=temp;
    cout<<"The first element is now "<<array[0]<<endl;
    cout<<"The last element is now "<<array[size-1]<<endl;
    //Map/Process/Calculations, Inputs to Outputs
}
                //Problem 4
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
//*************************************************
void fstLst2(){//Problem 5
    //Declare all Variables, no doubles
    vector <int> v;
    char repeat;
    int i=-1;
    int choice;
    //Input or initialize values
    do{
        cout<<"Enter an integer for the array"<<endl;
        cin>>choice;
        v.push_back(choice);
        i++;//used to keep track of last element in vector
        cout<<"Do you have more integers to input? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    cout<<endl;
    if(v[0]==2||v[i]==2)cout<<"True"<<endl;
    else cout<<"False"<<endl;
}
void spFtBkV(){//Problem 6
    //Declare all Variables, no doubles
    vector<int>v;
    char repeat;
    int i=-1;
    int input;
    //Input or initialize values
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        v.push_back(input);
        i++;//used to keep track of the last element in the vector
        cout<<"Do you have more integers to input? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    cout<<"The first element in the vector is "<<v[0]<<endl;
    cout<<"The second element in the vector is "<<v[i]<<endl;
    int temp;
    temp=v[0];
    v[0]=v[i];
    v[i]=temp;
    cout<<"The new first element in the vector is "<<v[0]<<endl;
    cout<<"The new second element in the vector is "<<v[i]<<endl;
}