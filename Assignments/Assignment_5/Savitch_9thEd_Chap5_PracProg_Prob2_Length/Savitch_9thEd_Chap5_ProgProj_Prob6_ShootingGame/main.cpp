/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 26, 2018, 12:01 PM
 * Purpose:  Play a shooting game
 */

//System Libraries Here
#include <iostream> //input output
#include <iomanip>  //io manipulation
#include <cstdlib>  //rng
#include <ctime>    //seed rng
#include <cmath>    //power function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float frand();  //probability from 0-1
bool shoot(float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare all Variables Here
    bool aLive,bLive,cLive; //Determine if players are alive or not
    char remain;
    float aPk,bPk,cPk;
    int aCount,bCount,cCount;
    
    //Input or initialize values Here
    aCount=bCount=cCount=0;
    
    aPk=1.0/3.0;
    bPk=1.0/2.0;
    cPk=1.0f;
    
    for(int game=1;game<=1000;game++){
        aLive=bLive=cLive=true;
        
        //Process/Calculations Here
        do{
            if(aLive){
                if(cLive)      cLive=shoot(aPk);
                else if(bLive) bLive=shoot(aPk);

            }if(bLive){
                if(cLive)      cLive=shoot(bPk);
                else if(aLive) aLive=shoot(bPk);
            }if(cLive){
                if(bLive)      bLive=shoot(cPk);
                else if(aLive) aLive=shoot(cPk);
            }
            remain=aLive+bLive+cLive;
        }while(remain>1);
        aCount+=aLive;
        bCount+=bLive;
        cCount+=cLive;
    }
    //Out Results
    cout<<"Aaron   is "<<(aLive?"Alive":"Deceased")<<endl;
    cout<<"Bob     is "<<(bLive?"Alive":"Deceased")<<endl;
    cout<<"Charlie is "<<(cLive?"Alive":"Deceased")<<endl;
    cout<<"Aaron   won "<<aCount<<" times"<<endl;
    cout<<"Bob     won "<<bCount<<" times"<<endl;
    cout<<"Charlie won "<<cCount<<" times"<<endl;
    
    //Exit
    return 0;
}
float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}
bool shoot(float pk){
    if(frand()>pk)return true;
    return false;
}