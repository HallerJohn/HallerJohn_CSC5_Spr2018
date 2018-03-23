/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 22, 2018, 12:05 AM
 * Purpose: Menu for all homework assignments
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
            case '1':{
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
        }
        
    }else  cout<<"Exiting menu"<<endl;
    
    //Display Outputs
    
    //Exit program!

    return 0;
}

