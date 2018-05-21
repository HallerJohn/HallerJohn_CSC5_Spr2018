/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 17, 2018, 11:30 AM
 * Purpose:  BlackJack
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filDeck(char [],char);
char suit(char);
char face(char);
void shuffle(char [],char);
void prntDck(char [],char,char);
void selSort(char [],char);
char pullDck(char [],char);
void deal(char [],char,char [],char);
char numVal(char);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const char DCKSIZE=52;
    char deck[DCKSIZE];
    const char HNDSZ=5;
    char hand[HNDSZ];
    
    //Input or initialize values Here
    filDeck(deck,DCKSIZE);
    shuffle(deck,DCKSIZE);
    selSort(deck,DCKSIZE);
    prntDck(deck,DCKSIZE,13);
    for(int tryit=1;tryit<=11;tryit++){
        deal(deck,DCKSIZE,hand,HNDSZ);
        prntDck(hand,HNDSZ,HNDSZ);
    }
    prntDck(deck,DCKSIZE,13);
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}


void deal(char deck[],char nDeck,char hand[],char nHand){
    static char current=0;
    if(current>nDeck-nHand){
        shuffle(deck,nDeck);
        current=0;
    }
    for(int card=0;card<nHand;card++){
        hand[card]=deck[current++];
    }
}
char pullDck(char deck[],char nCards){
    static char current=0;
    if(current>nCards*0.9){
        shuffle(deck,nCards);
        current=0;
    }
    return deck[current++];
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
void filDeck(char c[],char n){
    for(int eachCrd=0;eachCrd<n;eachCrd++){
        c[eachCrd]=eachCrd;
    }
}
char numVal(char card){//input card from hand hand[HNDSZ]
    int val=card%13+1;
    if(val==1)return 11;
    if(val>10)return 10;
    return val;
    
}

char suit(char card){
    string suitVal="SDCH";
    return suitVal[card/13];
}
char face(char card){
    string faceVal="A23456789TJQK";
    return faceVal[card%13];
}
void shuffle(char c[],char nCard){
    for(int shfl=1;shfl<=7;shfl++){
        for(int card=0;card<nCard;card++){
            int random=rand()%nCard;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void prntDck(char deck[],char nCards,char perLine){
    cout<<endl;
    for(int card=0;card<nCards;card++){
        cout<<face(deck[card])<<suit(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}