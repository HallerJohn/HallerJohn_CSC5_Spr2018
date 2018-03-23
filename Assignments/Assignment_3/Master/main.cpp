/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 22, 2018, 12:05 AM
 * Purpose: Menu for all homework assignments
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <cmath>
#include <iomanip>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    // Display menu
    cout<<"Choose from the following menu"<<endl;
    cout<<"Type 1 for Savitch_9thEd_Chap3_PracProb_Prob3_Horoscope"<<endl;
    cout<<"Type 2 for Savitch_9thEd_Chap3_PracProb_Prob4_HorElements"<<endl;
    cout<<"Type 3 for Savitch_9thEd_Chap3_PracProb_Prob5_PrimesForLoop"<<endl;
    cout<<"Type 4 for Savitch_9thEd_Chap3_PracProb_Prob1_RockPaper"<<endl;
    cout<<"Type 5 for Savitch_9thEd_Chap3_PracProg_Prob2_RevolvingCredit"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap3_ProgProj_Prob6_FibonacciCrud"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap3_ProgProj_Prob9_MontyHall"<<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap3_ProgProj_Prob12_GameOf23"<<endl;
    cout<<"Type 9 for Savitch_9thEd_Chap3_ProgProj_Prob13_HolyDigitsBatman"
            <<endl;
    cin>>choice;
    
    //Map/Process Inputs to Outputs
    if(choice>='1'&&choice<='9'){
        switch(choice){
            case '1':{                                      //Problem 1
                cout<<"Savitch_9thEd_Chap3_PracProb_Prob3_Horoscope"<<endl;
                //Declare Variables
    float brthMon,      //month of users birth
            brthDay;    //day of users birth
    // Initial Variables
    cout<<"Input your birth month as a number 1-12"<<endl;
    cin>>brthMon;
    cout<<"Input the day of the month you were born on"<<endl;
    cin>>brthDay;
    
    //Calculate horoscope
    if(brthMon==1){
        if(brthDay<=19){
            cout<<"You are a Capricorn"<<endl;
            cout<<"You will have a super bad week"<<endl;
        }
        else if(brthDay>19){
            cout<<"You are an Aquarius"<<endl;
            cout<<"You will have a wet weekend"<<endl;
        }
        
    }
    else if(brthMon==2){
        if(brthDay<=18){
            cout<<"You are an Aquarius"<<endl;
            cout<<"You might be dying soon"<<endl;
        }
        else if(brthDay>18){
            cout<<"You are a Pisces"<<endl;
            cout<<"You might come across $20 on the floor"<<endl;
        }
        
    }
    else if(brthMon==3){
        if(brthDay<=20){
            cout<<"You are a Pisces"<<endl;
            cout<<"You should lay off the sweet tarts"<<endl;
        }
        else if(brthDay>20){
            cout<<"You are an Aries"<<endl;
            cout<<"You are going to spill your coffee on your "<<endl;
            cout<<"favorite dress"<<endl;
        }
        
    }
    else if(brthMon==4){
        if(brthDay<=19){
            cout<<"You are an Aries"<<endl;
            cout<<"You will have a fluffy day"<<endl;
        }
        else if(brthDay>19){
            cout<<"You are a Taurus"<<endl;
            cout<<"Don't cry about him"<<endl;
        }
        
    }
    else if(brthMon==5){
        if(brthDay<=20){
            cout<<"You are a Taurus"<<endl;
            cout<<"You are a weak-minded simpleton"<<endl;
        }
        else if(brthDay>20){
            cout<<"You are a Gemini"<<endl;
            cout<<"You should make your own horoscope"<<endl;
        }
        
    }
    else if(brthMon==6){
        if(brthDay<=21){
            cout<<"You are a Gemini"<<endl;
            cout<<"Never trust Johnathan's frijoles"<<endl;
        }
        else if(brthDay>121){
            cout<<"You are a Cancer"<<endl;
            cout<<"Your future does not look good"<<endl;
        }
        
    }
    else if(brthMon==7){
        if(brthDay<=22){
            cout<<"You are a Cancer"<<endl;
            cout<<"You have fantastic eyes"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Leo"<<endl;
            cout<<"You are ferocious in bed"<<endl;
        }
        
    }
    else if(brthMon==8){
        if(brthDay<=22){
            cout<<"You are a Leo"<<endl;
            cout<<"You should indulge more often"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Virgo"<<endl;
            cout<<"We forgot to pay the intern who normally does this"<<endl;
        }
        
    }
    else if(brthMon==9){
        if(brthDay<=22){
            cout<<"You are a Virgo"<<endl;
            cout<<"We got back the intern!"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Libra"<<endl;
            cout<<"You must maintain the balance between good and evil"<<endl;
        }
        
    }
    else if(brthMon==10){
        if(brthDay<=22){
            cout<<"You are a Libra"<<endl;
            cout<<"Disrupt the balance at all cost"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Scorpio"<<endl;
            cout<<"You were so close"<<endl;
        }
        
    }
    else if(brthMon==11){
        if(brthDay<=21){
            cout<<"You are a Scorpio"<<endl;
            cout<<"You are the white sheep of the family"<<endl;
        }
        else if(brthDay>21){
            cout<<"You are a Sagittarius"<<endl;
            cout<<"Remember to always aim true"<<endl;
        }
        
    }
    else if(brthMon==12){
        if(brthDay<=21){
            cout<<"You are a Sagittarius"<<endl;
            cout<<"If you miss just shoot again"<<endl;
        }
        else if(brthDay>21){
            cout<<"You are a Capricorn"<<endl;
            cout<<"You deserve to die a long and painful death"<<endl;
        }
        
    }
    
            }break;
            case'2':{                                   //Problem 2
                cout<<"Savitch_9thEd_Chap3_PracProb_Prob4_HorElements"<<endl;
                //Declare Variables
    float brthMon,      //month of users birth
            brthDay;    //day of users birth
    // Initial Variables
    cout<<"Input your birth month as a number 1-12"<<endl;
    cin>>brthMon;
    cout<<"Input the day of the month you were born on"<<endl;
    cin>>brthDay;
    
    //Calculate horoscope
    if(brthMon==1){
        if(brthDay<=19){
            cout<<"You are a Capricorn"<<endl;
            cout<<"You will have a super bad week"<<endl;
            cout<<"You are compatible with Virgo and Taurus"<<endl;
        }
        else if(brthDay>19){
            cout<<"You are an Aquarius"<<endl;
            cout<<"You will have a wet weekend"<<endl;
            cout<<"You are compatible with Libra and Gemini"<<endl;
        }
        
    }
    else if(brthMon==2){
        if(brthDay<=18){
            cout<<"You are an Aquarius"<<endl;
            cout<<"You might be dying soon"<<endl;
            cout<<"You are compatible with Libra and Gemini"<<endl;
        }
        else if(brthDay>18){
            cout<<"You are a Pisces"<<endl;
            cout<<"You might come across $20 on the floor"<<endl;
            cout<<"You are compatible with Scorpio and Cancer"<<endl;
        }
        
    }
    else if(brthMon==3){
        if(brthDay<=20){
            cout<<"You are a Pisces"<<endl;
            cout<<"You should lay off the sweet tarts"<<endl;
            cout<<"You are compatible with Scorpio and Cancer"<<endl;
        }
        else if(brthDay>20){
            cout<<"You are an Aries"<<endl;
            cout<<"You are going to spill your coffee on your "<<endl;
            cout<<"favorite dress"<<endl;
            cout<<"You are compatible with Leo and Sagittarius"<<endl;
        }
        
    }
    else if(brthMon==4){
        if(brthDay<=19){
            cout<<"You are an Aries"<<endl;
            cout<<"You will have a fluffy day"<<endl;
            cout<<"You are compatible with Leo and Sagittarius"<<endl;
        }
        else if(brthDay>19){
            cout<<"You are a Taurus"<<endl;
            cout<<"Don't cry about him"<<endl;
            cout<<"You are compatible with Virgo and Capricorn"<<endl;
        }
        
    }
    else if(brthMon==5){
        if(brthDay<=20){
            cout<<"You are a Taurus"<<endl;
            cout<<"You are a weak-minded simpleton"<<endl;
            cout<<"You are compatible with Virgo and Capricorn"<<endl;
        }
        else if(brthDay>20){
            cout<<"You are a Gemini"<<endl;
            cout<<"You should make your own horoscope"<<endl;
            cout<<"You are compatible with Libra and Aquarius"<<endl;
        }
        
    }
    else if(brthMon==6){
        if(brthDay<=21){
            cout<<"You are a Gemini"<<endl;
            cout<<"Never trust Johnathan's frijoles"<<endl;
            cout<<"You are compatible with Libra and Aquarius"<<endl;
        }
        else if(brthDay>121){
            cout<<"You are a Cancer"<<endl;
            cout<<"Your future does not look good"<<endl;
            cout<<"You are compatible with Scorpio and Pisces"<<endl;
        }
        
    }
    else if(brthMon==7){
        if(brthDay<=22){
            cout<<"You are a Cancer"<<endl;
            cout<<"You have fantastic eyes"<<endl;
            cout<<"You are compatible with Scorpio and Pisces"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Leo"<<endl;
            cout<<"You are ferocious in bed"<<endl;
            cout<<"You are compatible with Aries and Sagittarius"<<endl;
        }
        
    }
    else if(brthMon==8){
        if(brthDay<=22){
            cout<<"You are a Leo"<<endl;
            cout<<"You should indulge more often"<<endl;
            cout<<"You are compatible with Aries and Sagittarius"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Virgo"<<endl;
            cout<<"We forgot to pay the intern who normally does this"<<endl;
            cout<<"You are compatible with Taurus and Capricorn"<<endl;
        }
        
    }
    else if(brthMon==9){
        if(brthDay<=22){
            cout<<"You are a Virgo"<<endl;
            cout<<"We got back the intern!"<<endl;
            cout<<"You are compatible with Taurus and Capricorn"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Libra"<<endl;
            cout<<"You must maintain the balance between good and evil"<<endl;
            cout<<"You are compatible with Gemini and Aquarius"<<endl;
        }
        
    }
    else if(brthMon==10){
        if(brthDay<=22){
            cout<<"You are a Libra"<<endl;
            cout<<"Disrupt the balance at all cost"<<endl;
            cout<<"You are compatible with Gemini and Aquarius"<<endl;
        }
        else if(brthDay>22){
            cout<<"You are a Scorpio"<<endl;
            cout<<"You were so close"<<endl;
            cout<<"You are compatible with Cancer and Pisces"<<endl;
        }
        
    }
    else if(brthMon==11){
        if(brthDay<=21){
            cout<<"You are a Scorpio"<<endl;
            cout<<"You are the white sheep of the family"<<endl;
            cout<<"You are compatible with Cancer and Pisces"<<endl;
        }
        else if(brthDay>21){
            cout<<"You are a Sagittarius"<<endl;
            cout<<"Remember to always aim true"<<endl;
            cout<<"You are compatible with Aries and Leo"<<endl;
        }
        
    }
    else if(brthMon==12){
        if(brthDay<=21){
            cout<<"You are a Sagittarius"<<endl;
            cout<<"If you miss just shoot again"<<endl;
            cout<<"You are compatible with Aries and Leo"<<endl;
        }
        else if(brthDay>21){
            cout<<"You are a Capricorn"<<endl;
            cout<<"You deserve to die a long and painful death"<<endl;
            cout<<"You are compatible with Taurus and Virgo"<<endl;
        }
        
    }
    
            }break; 
            case'3':{                                   //Problem 3
                cout<<"Savitch_9thEd_Chap3_PracProb_Prob5_PrimesForLoop"<<endl;
                //set the random number seed
   srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nLoops=10000;
    bool prime;     //determine if num2Tst is prime
    
    //Initialize Variables
    
    //Calculate the answer
    for(int num2Tst=2;num2Tst<=nLoops;num2Tst++){
        prime=true;
        for(int i=2;i<=sqrt(nLoops)&&prime;i++){
            prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
        }
                  //Output data
        if(prime)cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    }
    
            }break;
            case'4':{                               //Problem 4
                cout<<"Savitch_9thEd_Chap3_PracProb_Prob1_RockPaper"<<endl;
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
            }break;
            case'5':{                                       //Problem 5
                cout<<"Savitch_9thEd_Chap3_PracProg_Prob2_RevolvingCredit"<<endl;
                //Declare Variables
    float balance,totDue,minPay,minDet,intDue;
    
    // Initial Variables
    cout<<"Input your current account balance"<<endl;
    cin>>balance;
    
    //Map/Process Inputs to Outputs
    if(balance<=1000){
        totDue=balance*1.015;
    }
    else if(balance>1000){
        totDue=(1000*1.015)+((balance-1000)*1.01);
    }
    intDue=totDue-balance;
    if(balance<=10){
        minPay=totDue;
    }
    else if(balance>10){
        minDet=totDue*.1;
        if(minDet>10){
            minPay=minDet;
        }else if(minDet<=10){
            minPay=10;
        }
    }
    cout<<"The total amount due is    :$"<<fixed<<setprecision(2)
            <<setw(10)<<totDue<<endl;
    cout<<"The total interest paid is :$"<<fixed<<setprecision(2)
            <<setw(10)<<intDue<<endl;
    cout<<"The minimum payment is     :$"<<fixed<<setprecision(2)
            <<setw(10)<<minPay<<endl;
    
            }break;
            case'6':{                                       //Problem 6
                cout<<"Savitch_9thEd_Chap3_ProgProj_Prob6_FibonacciCrud"<<endl;
                //Declare Variables
    int fn,fnm1,fnm2,intCrud,days;

    //Initial Variables
    fnm2=1;
    fnm1=1;
    intCrud=10;
    days=0;
    
    //print out the first 2 in the sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //calculate third element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate fourth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate fifth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate sixth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate seventh element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate eighth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //calculate ninth element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" There is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
            }break;
            case'7':{                                   //Problem 7
                cout<<"Savitch_9thEd_Chap3_ProgProj_Prob9_MontyHall"<<endl;
                //Seed random number generator
srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
float games,
        stayWin,        //times won when keeping door
        moveWin,        //times won when switched door
        drChose,        //first door chosen
        drWin,          //winning door
        drRev,          //door which was revealed
        drRem,          //remaining door
        choice;         //choice to switch or not
    // Initial Variables
games=0;
stayWin=0;
moveWin=0;
    
    //Map/Process Inputs to Outputs
do{
    drChose=rand()%3+1;
    drWin=rand()%3+1;
    do{
        drRev=rand()%3+1;
    }while(drRev==drChose||drRev==drWin);
    do{
        drRem=rand()%3+1;
    }while(drRem==drChose||drRem==drRev);
    choice=rand()%2+1;
    if(choice==1){
        if(drChose==drWin){
            stayWin++;
        }
    }
    if(choice==2){
        if(drRem==drWin){
            moveWin++;
        }
    }
    games++;
}while(games<10000);
    //Display Outputs
cout<<"Out of 10000 games keeping your original choice won "<<stayWin
        <<" times, while switching won "<<moveWin<<" times."<<endl;
cout<<"Keeping won "<<stayWin/100<<"% of the time, and Switching won "<<
        moveWin/100<<"% of the time"<<endl;
            }break;
            case'8':{                                       //Problem 8
                cout<<"Savitch_9thEd_Chap3_ProgProj_Prob12_GameOf23"<<endl;
                cout<<"Lets play a game of 23"<<endl;
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
            }break;
            case'9':{                                       //Problem 9
                cout<<"Savitch_9thEd_Chap3_ProgProj_Prob13_HolyDigitsBatman"
                <<endl;
                //seed random generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int a,b,c,d,count;      //answer is 9837
    //Initial Variables
    count=1;
    do{
        do{
            do{
                do{
                    a=rand()%10;
                    b=rand()%10;
                    c=rand()%10;
                    d=rand()%10;
                }while(a==b||a==c||a==d||b==c||b==d||c==d);
            }while(a!=3*c);
        }while(d%2==0);
    }while(a+b+c+d!=27);
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<a<<b<<c<<d<<" Pennsylvania Ave. is the address"<<endl;
            }break;
        }
        
    }else  cout<<"Exiting menu"<<endl;
    
    //Display Outputs
    
    //Exit program!

    return 0;
}

