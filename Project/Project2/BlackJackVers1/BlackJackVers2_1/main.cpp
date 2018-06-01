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
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const char players=2;//2 players

//Function Prototypes 
void filDeck(char [],char);//used to fill deck
void selSort(char [],char);//used to sort deck
char suitVal(char);//used to find the val of the suit on a card
char faceVal(char);//used to find the val of the card number
void prtDeck(char [],char);//used to print deck in testing
void shuffle(char [],char);//used to shuffle deck
void deal(char [],char,vector < char > &);//used to deal deck
void prntHnd(vector < char >);
void score(vector < char >, int &,int &, int &);
void winner(bool,bool,int,int);
void pause(int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare all Variables, no doubles
    char repeat;//Used to play another hand or not
    const char size=52;//number of cards in a deck
    char deck[size];//deck used to deal hands

    char plHit;//Used to determine if player wants to hit first time
    char choice;//Used to decide if player wants to hit again
    
    //Fill the deck and shuffle it
    filDeck(deck,size);
    selSort(deck,size);
    shuffle(deck,size);
        
    //Play the game
    do{
        //Declare all Variables, no doubles
        vector< char > player1={ };//player 1 hand
        vector< char > dealer= { };//dealer hand
        int plCard=0;//current card being scored
        int dlCard=0;//current card being scored
        int plScore=0;//player score
        int dlScore=0;//dealer score
        bool plBust=false;//Set to true if player busts
        bool dlBust=false;//Set to true if dealer busts
        int plAce=0;//counter for player's aces
        int dlAce=0;//counter for dealer's aces
        
        //Deal Player 1 starting hand
        for(int i=0;i<2;i++){
            deal(deck,size,player1);
        }
        //Deal Dealer's starting hand
        for(int i=0;i<2;i++){
            deal(deck,size,dealer);
        }
        //Print player 1 hand
        cout<<"Player 1's starting hand is "<<endl;
        prntHnd(player1);
        pause(2);
        //Score player1 starting hand
        for(int i=0;i<player1.size();i++){
            score(player1,plScore,plCard,plAce);
        }
        cout<<"Player 1 current score is "<<plScore<<endl;
        pause(1);
        //hit or not
        cout<<"Would you like to hit? [Y/N]"<<endl;
        cin>>plHit;
        while(plHit=='Y'||plHit=='y'&&plScore<21){
            deal(deck,size,player1);
            cout<<"Your new hand is "<<endl;
            prntHnd(player1);
            score(player1,plScore,plCard,plAce);
            pause(2);
            cout<<"Your new score is "<<plScore<<endl;
            pause(1);
            if(plScore<=21){
                cout<<"Would you like to hit again? [Y/N]"<<endl;
                cin>>plHit;
            }else{
                cout<<"You Busted" <<endl;
                plHit='N';
                plBust=true;
            }
        }
        //Print final player 1 score
        cout<<"Your final score is "<<plScore<<endl;

        //Print Dealer's hand
        pause(1);
        cout<<"The Dealer's starting hand is "<<endl;
        prntHnd(dealer);
        pause(1);

        //Score dealer starting hand
        for(int i=0;i<dealer.size();i++){
            score(dealer,dlScore,dlCard,dlAce);
        }
        cout<<"Dealer's current score is "<<dlScore<<endl;
        pause(1);

        //hit or not
        if(dlScore<17){
            cout<<"The Dealer is going to hit"<<endl;
            pause(1);
            while (dlScore<17){
                deal(deck,size,dealer);
                cout<<"The Dealer's new hand is "<<endl;
                prntHnd(dealer);
                pause(1);
                score(dealer,dlScore,dlCard,dlAce);
                cout<<"The Dealer's new score is "<<dlScore<<endl;
                pause(1);
                if(dlScore<17)cout<<"The Dealer will hit again"<<endl;
                else if(dlScore>21){
                    cout<<"The Dealer busted"<<endl;
                    dlBust=true;
                }
                else cout<<"The Dealer is done hitting"<<endl;
            }
        }else if(dlScore<=21)cout<<"The Dealer will keep"<<endl;

        //Determine the winner
        pause(2);
        winner(plBust,dlBust,plScore,dlScore);
        cout<<"Would you like to play another hand? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Exit Program!
    
    return 0;
}

void filDeck(char deck[],char size){
    for(int card=0;card<size;card++){
        deck[card]=card;
    }
}
void selSort(char deck[],char dkSize){
    for(int lstSize=0;lstSize<dkSize-1;lstSize++){
        char idxSmal=lstSize;
        for(int fndSmal=lstSize+1;fndSmal<dkSize;fndSmal++){
            if(deck[idxSmal]>deck[fndSmal]){
                idxSmal=fndSmal;
            }
        }
        char temp=deck[lstSize];
        deck[lstSize]=deck[idxSmal];
        deck[idxSmal]=temp;
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
    cout<<endl;
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
void deal(char deck[],char size,vector < char > &player){
    static char current=0;
    if(current>size-5){//Used to shuffle once their are only 5 cards remaining
        shuffle(deck,size);
        current=0;
    }
    player.push_back(deck[current++]);
}

void prntHnd(vector < char > hand){
    for(int i=0;i<hand.size();i++){
        cout<<faceVal(hand[i])<<" of "<<suitVal(hand[i])<<endl;
    }
}
void score(vector < char > hand, int &score, int &card,int &ace){
    switch(faceVal(hand[card])){
        case'A':{score+=11;ace++;break;}
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
    if(score>21&&ace>0){
        score-=10;
        ace--;
    }
    card++;
}
void winner(bool plBust,bool dlBust,int plScore,int dlScore){
    cout<<endl<<endl;
    if(plBust==0&&dlBust!=0)cout<<"Dealer busted, Player 1 wins"<<endl;
    else if(plBust!=0&&dlBust==0)cout<<"Player 1 busted, Dealer wins"<<endl;
    else if(plBust!=0&&dlBust!=0)cout<<"Both players busted. It is a tie"<<endl;
    else if(plScore>dlScore)cout<<"Player 1 wins"<<endl;
    else if(plScore<dlScore)cout<<"Dealer wins by"<<endl;
    else if(plScore==dlScore)cout<<"Both players have the same score."
            <<"It is a tie"<<endl;
}
void pause(int secs){
    int begin=time(0);//time at beginning
    int end;//time at end
    do{
        end=time(0);
    }while((end-begin)<=secs);
}