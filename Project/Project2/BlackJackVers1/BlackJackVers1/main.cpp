/* 
 * File:   CPPTemplate.cpp
 * Author: john Haller
 * Created on May 20, 2018, 9:30 PM
 * Purpose:  CPP Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void filDeck(char [],char);
char suitVal(char);
char faceVal(char);
void prtDeck(char [],char);
void shuffle(char [],char);
void deal(char [],char,char [][2],char,char);
void prtHand(char [][2],char,char);
void hit(char [][2]);
int score(char [][2],char,char);
int score2(char [][2],char,char);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare all Variables, no doubles
    bool bust1;
    const char size=52;
    char deck[size];
    const char hndSize=3;
    const char players=2;
    char hand[hndSize][players];
    
    //Input or initialize values
    filDeck(deck,size);
    //Map/Process/Calculations, Inputs to Outputs
    prtDeck(deck,size);
    shuffle(deck,size);
    prtDeck(deck,size);
    deal(deck,size,hand,hndSize,players);
    cout<<endl<<endl<<endl;
    prtHand(hand,hndSize,0);//0 for player 1 for dealer
    int fstScor=score(hand,hndSize,0);
    cout<<endl<<"Your current score is "<<endl
            <<fstScor<<endl;
    hit(hand);
    int fnlScor=(score2(hand,hndSize,0))+fstScor;
    cout<<endl<<"Your final score is: "
            <<fnlScor<<endl;
    if(fnlScor>21){
        cout<<"You have busted"<<endl;
        bust1=true;
    }else bust1=false;
    //Display Outputs
    
    //Exit Program!
    
    return 0;
}

void filDeck(char deck[],char size){
    for(int card=0;card<size;card++){
        deck[card]=card;
    }
}
char suitVal(char card){
    string suitVal="SDCH";
    return suitVal[card/13];
}
char faceVal(char card){
    string faceVal="A23456789TJQK";
    return faceVal[card%13];
}
void prtDeck(char deck[],char size){
    int perline=10;
    cout<<endl;
    for(int card=0;card<size;card++){
        cout<<faceVal(deck[card])<<suitVal(deck[card])<<" ";
        if(card%perline==(perline-1))cout<<endl;
    }
}
void shuffle(char deck[],char size){
    for(int nShuf=1;nShuf<=7;nShuf++){
        for(int card=0;card<size;card++){
            int random=rand()%size;
            char temp=deck[card];
            deck[card]=deck[random];
            deck[random]=temp;
            
        }
    }
}
void deal(char deck[],char size,char hand[][2],char hndSize, char players){
    static char current=0;
    if(current>size-hndSize){
        shuffle(deck,size);
        current=0;
    }
    for(int player=0;player<players;player++){
        for(int card=0;card<hndSize;card++){
            hand[card][player]=deck[current++];
        }
    }
}
void prtHand(char hand[][2],char hndSize,char player){
    cout<<endl;
    if(player==0)cout<<"Player 1 hand"<<endl;
    else if(player==1)cout<<"Dealer Hand"<<endl;
    for(int card=0;card<(hndSize-1);card++){
        cout<<faceVal(hand[card][player])<<suitVal(hand[card][player])<<" ";
    }cout<<endl;
}
void hit(char hand[][2]){
    char choice;
    cout<<"Would you like to hit? [Y/N]"<<endl;
    cin>>choice;
    if(choice=='Y'||choice=='y'){
        cout<<"Your third card is: ";
        cout<<faceVal(hand[2][0])<<suitVal(hand[2][0])<<endl;
    }
}
int score(char hand[][2],char hndSize,char player){
    int faceScr=0;
    for(int card=0;card<(hndSize-1);card++){
        char faceCrd=faceVal(hand[card][player]);
        switch(faceCrd){
            case'A':{
                if(faceScr>10){faceScr+=1;}
                else {faceScr+=11;}
                break;}
            case'2':{faceScr+=2;break;}
            case'3':{faceScr+=3;break;}
            case'4':{faceScr+=4;break;}
            case'5':{faceScr+=5;break;}
            case'6':{faceScr+=6;break;}
            case'7':{faceScr+=7;break;}
            case'8':{faceScr+=8;break;}
            case'9':{faceScr+=9;break;}
            case'T':{faceScr+=10;break;}
            case'J':{faceScr+=10;break;}
            case'Q':{faceScr+=10;break;}
            case'K':{faceScr+=10;break;}
        }
    }
    return faceScr;
}
int score2(char hand[][2],char hndSize,char player){
    int faceScr=0;
    char faceCrd=faceVal(hand[2][player]);
    switch(faceCrd){
        case'A':{
            if(faceScr>10){faceScr+=1;}
            else {faceScr+=11;}
            break;}
        case'2':{faceScr+=2;break;}
        case'3':{faceScr+=3;break;}
        case'4':{faceScr+=4;break;}
        case'5':{faceScr+=5;break;}
        case'6':{faceScr+=6;break;}
        case'7':{faceScr+=7;break;}
        case'8':{faceScr+=8;break;}
        case'9':{faceScr+=9;break;}
        case'T':{faceScr+=10;break;}
        case'J':{faceScr+=10;break;}
        case'Q':{faceScr+=10;break;}
        case'K':{faceScr+=10;break;}
    }
    return faceScr;
}
