/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on May 17, 2018, 9:07 AM
 * Purpose:  Generating deck of cards
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char NCARDS=7;//Column dimension for the players 2D-array
//Function Prototypes Here
void fillMny(char [],char);//fill money deck
void fillPts(char [],char);//fill points deck
void fillAct(char [],char);//fill actions deck
void fillPly(char [][NCARDS],char);//fill player decks
void prntDck(char [],char,char);
void prntPly(char [][NCARDS],char);
void shuffle(char [],char);
void bubble(char [],char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const char NPLYERS=2;
    const char NMNY=99-2*5;//2 players start with 5 bronze cards
    const char NPTS=90-2*2;//2 players start with 2 1 point cards
    const char NACT=100;
    char mnyDeck[NMNY];
    char ptsDeck[NPTS];
    char actDeck[NACT];
    char cards[NPLYERS][NCARDS];
    
    //Input or initialize values Here
    fillMny(mnyDeck,NMNY);//fill money deck
    fillPts(ptsDeck,NPTS);//fill points deck
    fillAct(actDeck,NACT);//fill actions deck
    fillPly(cards,NPLYERS);//fill player decks
    //Process/Calculations Here
    //Shuffle deck
    shuffle(mnyDeck,NMNY);//shuffle money deck
    shuffle(ptsDeck,NPTS);//shuffle points deck
    shuffle(actDeck,NACT);//shuffle actions deck
    
    //Output Located Here
    prntDck(mnyDeck,NMNY,10);
    prntDck(ptsDeck,NPTS,10);
    prntDck(actDeck,NACT,10);
    prntPly(cards,NPLYERS);
    
    //make sure we didnt loose any cards
    bubble(mnyDeck,NMNY);//sort money deck
    prntDck(mnyDeck,NMNY,10);
    //Exit
    return 0;
}


void bubble(char d[],char n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-1;j++){
            if(d[j]>d[j+1]){
                char temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
}
void shuffle(char c[],char n){
    for(int shfl=1;shfl<7;shfl++){
        for(int card=0;card<n;card++){
            int random=rand()%n;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void prntDck(char d[],char n,char perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}
void prntPly(char p[][NCARDS],char n){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<NCARDS;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void fillMny(char m[],char n){
    char count=0;
    //33 Silver
    for(int i=1;i<=33;i++){
        m[count++]='S';
    }
    //33 Gold
    for(int i=1;i<=33;i++){
        m[count++]='G';
    }
    //23 Bronze
    for(int i=1;i<=23;i++){
        m[count++]='B';
    }
    if(count!=n)cout<<"Error in filling money deck";
}
void fillPts(char p[],char n){
    char count=0;
    //30 3 point cards
    for(int i=1;i<=30;i++){
        p[count++]='3';
    }
    //30 6 point cards
    for(int i=1;i<=30;i++){
        p[count++]='6';
    }
    //30-4 1 point cards
    for(int i=1;i<=26;i++){
        p[count++]='1';
    }
    if(count!=n)cout<<"Error in filling point deck";
}
void fillAct(char a[],char n){
    char count=0;
    for(int i=0;i<10;i++){
        for(int j=1;j<=10;j++){
            a[count++]='a'+i;
        }
    }
    if(count!=n)cout<<"Error in filling action deck";
}
void fillPly(char c[][NCARDS],char n){
    for(int ply=0;ply<n;ply++){
        //each player gets 5 bronze cards
        for(int card=0;card<5;card++){
            c[ply][card]='B';
        }
        //each player gets 2 1 point cards
        for(int card=5;card<NCARDS;card++){
            c[ply][card]='1';
        }
    }
}

