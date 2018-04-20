/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 16, 2018, 12:05 AM
 * Purpose: Make a game of Black Jack
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <cmath>    //math functions
#include <cstdlib>  //random number generator
#include <ctime>    //set time for rng
#include <iomanip>  //io manipulation

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float favNum,favSqua;
    char play;
    char choice;                        //Player's choice to hit or keep
    int plScore,                        //Player's Score
            cpScore;                    //computer's score
    int plSuit1,plSuit2,plSuit3,        //suit for player cards
            cpSuit1,cpSuit2,cpSuit3;     //suit for computer cards
    int plCard1,plCard2,plCard3,        //cards for player
            cpCard1,cpCard2,cpCard3;    //cards for computer
    //Introduction
    cout<<"Hello what is your favorite number?"<<endl;
    cin>>favNum;
    favSqua=pow(favNum,2);
    cout<<"Your favorite number squared is "<<favSqua<<endl;
    //Initialize variables
    cout<<"Would you like to play a game of Black Jack? [Y/N]"<<endl;
    cin>>play;
    while(play=='Y'||play=='y'){
        plScore=0;
        cpScore=0;
        //1111112222222233333333444444445555555566666666777777778888888899999999                                       
        // Deal cards
        do{                              //Loop to generate cards and their suit
            plCard1=rand()%13+2;         //Player's first card
            plCard2=rand()%13+2;         //Player's second card
            plCard3=rand()%13+2;         //Player's third card
            plSuit1=rand()%4;            //Player's first suit
            plSuit2=rand()%4;            //Player's second suit
            plSuit3=rand()%4;            //Player's third suit
            cpCard1=rand()%13+2;         //Computer's first card
            cpCard2=rand()%13+2;         //Computer's second card
            cpCard3=rand()%13+2;         //Computer's third card
            cpSuit1=rand()%4;            //Computer's first suit
            cpSuit2=rand()%4;            //Computer's second suit
            cpSuit3=rand()%4;            //Computer's third suit

        }while(plCard1==plCard2&&plCard2==plCard3&&     //Messy logic to make
                plSuit1==plSuit2&&plSuit2==plSuit3&&    //sure that no two
                cpCard1==cpCard2&&cpCard2==cpCard3&&    //of the same card
                cpSuit1==cpSuit2&&cpSuit2==cpSuit3&&    //are chosen
                plCard1==cpCard1&&plSuit1==cpSuit1);

        //1111112222222233333333444444445555555566666666777777778888888899999999
        //Display Player card 1
        if(plSuit1==0){                     //If the suit of card 1 is hearts 
            if(plCard1>=2&&plCard1<=10){ 
                cout<<"Your first card is "<<plCard1<<" of Hearts"<<endl;
            }else if(plCard1==11)cout<<"Your first card is Jack of Hearts"
                    <<endl;
            else if(plCard1==12)cout<<"Your first card is Queen of Hearts"
                    <<endl;
            else if(plCard1==13)cout<<"Your first card is King of Hearts"<<endl;
            else if(plCard1==14)cout<<"Your first card is Ace of Hearts"<<endl;
        }else if(plSuit1==1){               //If the suit of card 1 is diamonds
            if(plCard1>=2&&plCard1<=10){    
                cout<<"Your first card is "<<plCard1<<" of Diamonds"<<endl;
            }else if(plCard1==11)cout<<"Your first card is Jack of Diamonds"
                    <<endl;
            else if(plCard1==12)cout<<"Your first card is Queen of Diamonds"
                    <<endl;
            else if(plCard1==13)cout<<"Your first card is King of Diamonds"
                    <<endl;
            else if(plCard1==14)cout<<"Your first card is Ace of Diamonds"
                    <<endl;
        }else if(plSuit1==2){               //If the suit of card 1 is clubs
            if(plCard1>=2&&plCard1<=10){
                cout<<"Your first card is "<<plCard1<<" of Clubs"<<endl;
            }else if(plCard1==11)cout<<"Your first card is Jack of Clubs"<<endl;
            else if(plCard1==12)cout<<"Your first card is Queen of Clubs"<<endl;
            else if(plCard1==13)cout<<"Your first card is King of Clubs"<<endl;
            else if(plCard1==14)cout<<"Your first card is Ace of Clubs"<<endl;
        }else if(plSuit1==3){               //If the suit of card 1 is spades
            if(plCard1>=2&&plCard1<=10){
                cout<<"Your first card is "<<plCard1<<" of Spades"<<endl;
            }else if(plCard1==11)cout<<"Your first card is Jack of Spades"
                    <<endl;
            else if(plCard1==12)cout<<"Your first card is Queen of Spades"
                    <<endl;
            else if(plCard1==13)cout<<"Your first card is King of Spades"
                    <<endl;
            else if(plCard1==14)cout<<"Your first card is Ace of Spades"
                    <<endl;
        }
        //1111112222222233333333444444445555555566666666777777778888888899999999
        //Display player card 2
        if(plSuit2==0){                     //If the suit of card 2 is hearts           
            if(plCard2>=2&&plCard2<=10){
                cout<<"Your second card is "<<plCard2<<" of Hearts"<<endl;
            }else if(plCard2==11)cout<<"Your second card is Jack of Hearts"
                    <<endl;
            else if(plCard2==12)cout<<"Your second card is Queen of Hearts"
                    <<endl;
            else if(plCard2==13)cout<<"Your second card is King of Hearts"
                    <<endl;
            else if(plCard2==14)cout<<"Your second card is Ace of Hearts"<<endl;
        }else if(plSuit2==1){               //If the suit of card 2 is diamonds   
            if(plCard2>=2&&plCard2<=10){
                cout<<"Your second card is "<<plCard2<<" of Diamonds"<<endl;
            }else if(plCard2==11)cout<<"Your second card is Jack of Diamonds"
                    <<endl;
            else if(plCard2==12)cout<<"Your second card is Queen of Diamonds"
                    <<endl;
            else if(plCard2==13)cout<<"Your second card is King of Diamonds"
                    <<endl;
            else if(plCard2==14)cout<<"Your second card is Ace of Diamonds"
                    <<endl;
        }else if(plSuit2==2){               //If the suit of card 2 is clubs   
            if(plCard2>=2&&plCard2<=10){
                cout<<"Your second card is "<<plCard2<<" of Clubs"<<endl;
            }else if(plCard2==11)cout<<"Your second card is Jack of Clubs"
                    <<endl;
            else if(plCard2==12)cout<<"Your second card is Queen of Clubs"
                    <<endl;
            else if(plCard2==13)cout<<"Your second card is King of Clubs"<<endl;
            else if(plCard2==14)cout<<"Your second card is Ace of Clubs"<<endl;
        }else if(plSuit2==3){               //If the suit of card 2 is spades   
            if(plCard2>=2&&plCard2<=10){
                cout<<"Your second card is "<<plCard2<<" of Spades"<<endl;
            }else if(plCard2==11)cout<<"Your second card is Jack of Spades"
                    <<endl;
            else if(plCard2==12)cout<<"Your second card is Queen of Spades"
                    <<endl;
            else if(plCard2==13)cout<<"Your second card is King of Spades"
                    <<endl;
            else if(plCard2==14)cout<<"Your second card is Ace of Spades"<<endl;
        }
        //1111112222222233333333444444445555555566666666777777778888888899999999
        //Determine current player score
        if (plCard1>=2&&plCard1<=9){        //if card 1 is 2-9 just add that
            plScore+=plCard1;
        }else if(plCard1>=10&&plCard1<=13){ //if card 1 is face card add 10
            plScore+=10;
        }else if(plCard1==14){                      //if card 1 is ace
            ((plScore>10)?plScore+=1:plScore+=11);  //add either 1 or 11     
        }
        if (plCard2>=2&&plCard2<=9){        //if card 2 is 2-9 just add that
            plScore+=plCard2;
        }else if(plCard2>=10&&plCard2<=13){ //if card 2 is face card add 10
            plScore+=10;
        }else if(plCard2==14){                      //if card 2 is ace
            ((plScore>10)?plScore+=1:plScore+=11);  //add either 1 or 11          
        }
        cout<<"Your score is "<<plScore<<endl;      //displaying total score
        cout<<"Would you like to hit or keep? [H/K]"<<endl; //hit or keep?
        cin>>choice;
        if (choice=='H'||choice=='h'){          //capitol h or lowercase
            if(plSuit3==0){             //if the suit of card 3 is hearts
                if(plCard3>=2&&plCard3<=10){
                    cout<<"Your third card is "<<plCard3<<" of Hearts"<<endl;
                }else if(plCard3==11)cout<<"Your third card is Jack of Hearts"
                        <<endl;
                else if(plCard3==12)cout<<"Your third card is Queen of Hearts"
                        <<endl;
                else if(plCard3==13)cout<<"Your third card is King of Hearts"
                        <<endl;
                else if(plCard3==14)cout<<"Your third card is Ace of Hearts"
                        <<endl;
            }else if(plSuit3==1){       //if the suit of card 3 is diamonds
                if(plCard3>=2&&plCard3<=10){
                    cout<<"Your third card is "<<plCard3<<" of Diamonds"<<endl;
                }else if(plCard3==11)cout<<"Your third card is Jack of Diamonds"
                        <<endl;
                else if(plCard3==12)cout<<"Your third card is Queen of Diamonds"
                        <<endl;
                else if(plCard3==13)cout<<"Your third card is King of Diamonds"
                        <<endl;
                else if(plCard3==14)cout<<"Your third card is Ace of Diamonds"
                        <<endl;
            }else if(plSuit3==2){       //if the suit of card 3 is clubs
                if(plCard3>=2&&plCard3<=10){
                    cout<<"Your third card is "<<plCard3<<" of Clubs"<<endl;
                }else if(plCard3==11)cout<<"Your third card is Jack of Clubs"
                        <<endl;
                else if(plCard3==12)cout<<"Your third card is Queen of Clubs"
                        <<endl;
                else if(plCard3==13)cout<<"Your third card is King of Clubs"
                        <<endl;
                else if(plCard3==14)cout<<"Your third card is Ace of Clubs"
                        <<endl;
            }else if(plSuit3==3){       //if the suit of card 3 is spades
                if(plCard3>=2&&plCard3<=10){
                    cout<<"Your third card is "<<plCard3<<" of Spades"<<endl;
                }else if(plCard3==11)cout<<"Your third card is Jack of Spades"
                        <<endl;
                else if(plCard3==12)cout<<"Your third card is Queen of Spades"
                        <<endl;
                else if(plCard3==13)cout<<"Your third card is King of Spades"
                        <<endl;
                else if(plCard3==14)cout<<"Your third card is Ace of Spades"
                        <<endl;
            }
        //1111112222222233333333444444445555555566666666777777778888888899999999
            //add card 3 onto player's score
            if (plCard3 >= 2 && plCard3 <= 9) { //if the card is 2-9 add that
                plScore += plCard3;
            } else if (plCard3 >= 10 && plCard3 <= 13) {  //if face card add 10
                plScore += 10;
            } else if (plCard3 == 14) {                         //if ace
                ((plScore > 10) ? plScore += 1 : plScore += 11);//add 1 or 11
            }
        }

        cout<<"Your final score is "<<setw(2)<<plScore
                <<endl;                             //output final score
        if(plScore>21){                             //determine if busted or not
            cout<<"You busted"<<endl;
        }
        //1111112222222233333333444444445555555566666666777777778888888899999999
        //Determine Computer Score
        if (cpCard1>=2&&cpCard1<=9){        //if first card is between 1-9
            cpScore+=cpCard1;
        }else if(cpCard1>=10&&cpCard1<=13){ //if first card is a face card
            cpScore+=10;
        }else if(cpCard1==14){              //if first card is an ace
            ((cpScore>10)?cpScore+=1:cpScore+=11);        
        }
        if (cpCard2>=2&&cpCard2<=9){        //if second card is between 1-9
            cpScore+=cpCard2;
        }else if(cpCard2>=10&&cpCard2<=13){ //if second card is a face card
            cpScore+=10;
        }else if(cpCard2==14){              //if second card is an ace
            ((cpScore>10)?cpScore+=1:cpScore+=11);        
        }
        if(cpScore<17){  //used to determine if dealer will hit or keep
            if (cpCard3 >= 2 && cpCard3 <= 9) {          //if third card is 1-9
                cpScore += cpCard3;
            } else if (cpCard3 >= 10 && cpCard3 <= 13) { //if third card is face  
                cpScore += 10;
            } else if (cpCard3 == 14) {                  //if third card is ace
                ((cpScore > 10) ? cpScore += 1 : cpScore += 11);
            }
        }
        cout<<"The Dealer's final score is "<<setw(2)<<cpScore
                <<endl;                             //output final score
        if(cpScore>21){                             //determine if dealer busted
            cout<<"The Dealer busted"<<endl;
            
        }
        //1111112222222233333333444444445555555566666666777777778888888899999999
        //Determine winner
        if(plScore>cpScore&&plScore<=21)cout<<"You win, Congratulations"<<endl;
        else if(cpScore>plScore&&cpScore<=21)cout<<"The Dealer wins, Sorry"
                <<endl;
        else if(plScore==cpScore)cout<<"It is a tie, no Winners"<<endl;
        cout<<"Would you like to play another game of Black Jack? [Y/N]"
                    <<endl;
        cin>>play;
    }
    //Exit program!

    return 0;
}

