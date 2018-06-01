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
const char players=2;//2 players

//Function Prototypes 
void filDeck(char [],char);//used to fill deck
char suitVal(char);//used to find the val of the suit on a card
char faceVal(char);//used to find the val of the card number
void prtDeck(char [],char);//used to print deck in testing
void shuffle(char [],char);//used to shuffle deck
void deal(char [],char,char [][players],char,char);//used to deal deck
void prtHand(char [][players],char,char);//used to print the hand
void hit(char [][players],char);//used to hit
int SCORE(char [][players],char,int,char);//TESTING NOT CURRENTLY IN USE
int score1(char [][players],char,char);//used to score first 2 cards
int score2(char [][players],char,char);//used to add third card to score
void winner(bool,bool,int,int);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare all Variables, no doubles
    int score=0;
    bool bust1=false,//set to true if player 1 busts
            bust2=false;//set to true if dealer busts
    const char size=52;//number of cards in a deck
    char deck[size];//deck used to deal hands
    const char hndSize=3;//3 cards dealt to each player
    char hand[hndSize][players];//the hand of each player
    
    //Fill the deck and shuffle it
    filDeck(deck,size);
    shuffle(deck,size);
    //Deal Hands
    deal(deck,size,hand,hndSize,players);
    
    //Print player 1 hand
    prtHand(hand,hndSize,0);//0 for player 1
    
    //Determine score after first 2 cards
    int fstScor=score1(hand,hndSize,0);
    cout<<endl<<"Your current score is "<<endl
            <<fstScor<<endl;
    
    //Ask if player wants to hit or not
    cout<<"Would you like to hit? [Y/N]"<<endl;
    char choice;
    cin>>choice;
    if(choice=='Y'||choice=='y'){
        hit(hand,0);
        //Add third card on to score and output
        fstScor+=(score2(hand,hndSize,0));
        cout<<endl<<"Your final score is: "
                <<fstScor<<endl;
        //Determine if player 1 busted
        if(fstScor>21){
            cout<<"You have busted"<<endl;
            bust1=true;
        }
    }else cout<<"Your final score is: "<<fstScor<<endl;
    
    //Print dealer hand
    prtHand(hand,hndSize,1);//1 for Dealer
    //Determine score after first 2 cards
    int delScor=score1(hand,hndSize,1);//1 for Dealer
    cout<<endl<<"The Dealer's current score is "<<endl
            <<delScor<<endl;
    //Determine if dealer hits or not
    if(delScor<=16){
        hit(hand,1);
        //Add third card on to score and output
        delScor+=(score2(hand,hndSize,1));
        cout<<endl<<"The Dealer's final score is: "
                <<delScor<<endl;
        //Determine if dealer busted
        if(delScor>21){
            cout<<"The Dealer has busted"<<endl;
            bust2=true;
        }
    //If the dealer didn't hit
    }else {
        cout<<"The Dealer keeps"<<endl;
        cout<<"His final score is: "<<delScor<<endl;
    }
    //Determine winner
    winner(bust1,bust2,fstScor,delScor);
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
void deal(char deck[],char size,char hand[][players],
        char hndSize, char players){
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
void prtHand(char hand[][players],char hndSize,char player){
    cout<<endl;
    if(player==0)cout<<"Player 1 hand"<<endl;
    else if(player==1)cout<<"Dealer Hand"<<endl;
    for(int card=0;card<(hndSize-1);card++){
        cout<<faceVal(hand[card][player])<<suitVal(hand[card][player])<<" ";
    }cout<<endl;
}
void hit(char hand[][players],char player){
    if(player==0){
            cout<<"Your third card is: ";
            cout<<faceVal(hand[2][player])<<suitVal(hand[2][player])<<endl;
    }
    else{
        cout<<"The dealer will hit"<<endl;
        cout<<"His third card is: ";
        cout<<faceVal(hand[2][player])<<suitVal(hand[2][player])<<endl;
    }
}
int score1(char hand[][players],char hndSize,char player){
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
int score2(char hand[][players],char hndSize,char player){
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
int SCORE(char hand[][players],char hndsize,int score, char player){
    int value;
    score=faceVal(hand[hndsize][player]);
    switch(score){
        case'A':{
            if(score>10){score+=1;}
            else {score+=11;}
            break;}
        case'2':{score+=2;break;}
        case'3':{score+=3;break;}
        case'4':{score+=4;break;}
        case'5':{score+=5;break;}
        case'6':{score+=6;break;}
        case'7':{score+=7;break;}
        case'8':{score+=8;break;}
        case'9':{score+=9;break;}
        case'T':{score+=10;break;}
        case'J':{score+=10;break;}
        case'Q':{score+=10;break;}
        case'K':{score+=10;break;}
    }
    return score;
}
void winner(bool bust1,bool bust2,int fstScor,int delScor){
    cout<<bust1<<endl<<bust2<<endl;
    if(bust1==0&&bust2!=0)cout<<"Dealer busted, Player 1 wins"<<endl;
    else if(bust1!=0&&bust2==0)cout<<"Player 1 busted, Dealer wins"<<endl;
    else if(bust1!=0&&bust2!=0)cout<<"Both players busted. It is a tie"<<endl;
    else if(fstScor>delScor)cout<<"Player 1 wins"<<endl;
    else if(fstScor<delScor)cout<<"Dealer wins by"<<endl;
    else if(fstScor==delScor)cout<<"Both players have the same score."
            <<"It is a tie"<<endl;
}
