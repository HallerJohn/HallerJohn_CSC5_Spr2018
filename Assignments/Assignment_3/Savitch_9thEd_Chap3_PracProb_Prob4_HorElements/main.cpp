/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on March 19, 2018, 7:28 PM
 * Purpose: Make your own horoscope
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
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    
    //Exit program!

    return 0;
}

