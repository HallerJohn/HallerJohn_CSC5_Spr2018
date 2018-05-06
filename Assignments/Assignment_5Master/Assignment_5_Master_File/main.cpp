/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 5, 2018, 11:16 PM
 * Purpose: CPP Template
 *          To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>
#include <cmath>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns
const int DLRSPNY=100;     //conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;

//Function Prototypes
//Functions for Menu////////////////////////////////////////////////////////////
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
//Functions for Problem 1-3/////////////////////////////////////////////////////
float ftToM(int);
float inToCm(int);
float mToFt(int);
float cmToIn(int);
void input();
void output(int,int);
void input2();
void output2(int,int);
//Functions for problem 4-6/////////////////////////////////////////////////////
void inputW();
void outputW(int,int);
void inputW2();
void outputW2(int,int);
float lbsToKg(int);
float ozToG(int);
float kgToLbs(int);
float gToOz(int);
//Functions for problem 7///////////////////////////////////////////////////////
int numCoin(int,int);  //Calculates number of coins
int remandr(int,int);

//Functions for problem 8///////////////////////////////////////////////////////
float frand();  //probability from 0-1
bool shoot(float);
void shoot(bool,float,bool &,bool &);
//Functions for problem 9///////////////////////////////////////////////////////
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char gtCntVl(unsigned int);
char gtYrVal(unsigned int);
char gtMnVal(char,unsigned int);
string dyOfWek(char,char,unsigned int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast <unsigned int>(time(0)));
    //Declare Variables
    char choice,repeat;
    // Initial Variables
    do{
        menu();
        cin>>choice;
        //Map/Process Inputs to Outputs
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
        }
        cout<<"Would you like to return to the menu? [Y,N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    
    //Exit program!

    return 0;
}
//Functions for Menu////////////////////////////////////////////////////////////
void menu(){
    cout<<"Input 1 for Savitch_9thEd_Chap5_PracProg_Prob2_Length"
            <<endl;
    cout<<"Input 2 for Savitch_9thEd_Chap5_PracProg_Prob3_LengthModified"
            <<endl;
    cout<<"Input 3 for Savitch_9thEd_Chap5_PracProg_Prob4_Length+LengthModified"
            <<endl;
    cout<<"Input 4 for Savitch_9thEd_Chap5_PracProg_Prob5_Weight"
            <<endl;
    cout<<"Input 5 for Savitch_9thEd_Chap5_PracProg_Prob6_WeightModified"
            <<endl;
    cout<<"Input 6 for Savitch_9thEd_Chap5_PracProg_Prob7_Weight+WeightModified"
            <<endl;
    cout<<"Input 7 for Savitch_9thEd_Chap5_ProgProj_Prob4_Change"
            <<endl;
    cout<<"Input 8 for Savitch_9thEd_Chap5_ProgProj_Prob6_ShootingGame_Ver2"
            <<endl;
    cout<<"Input 9 for Savitch_9thEd_Chap5_ProgProj_Prob7_Date"
            <<endl;
}
void prob1(){       //Problem 1
    //Declare Variables
    float feet,inches;
    // Initial Variables
    input();
    cin>>feet>>inches;
    //Calculate length and output results
    output(feet,inches);
}
void prob2(){       //Problem 2
    //Declare Variables
    float m,cm;
    // Initial Variables
    input();
    cin>>m>>cm;
    //Calculate length and output results
    output(m,cm);
}
void prob3(){       //Problem 3
    //Declare Variables
    char choice,repeat;
    float m,cm,ft,in;
    // Initial Variables
    do{
        cout<<"Would you like to input M/CM(1) or Ft/In(2)"<<endl;
        cin>>choice;
        if (choice=='1'){
            input();
            cin>>m>>cm;
            output(m,cm);
        }else if(choice=='2'){
            input2();
            cin>>ft>>in;
            output2(ft,in);
        }
        cout<<"Would you like to repeat this process? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
}
void prob4(){       //Problem 4
    //Declare Variables
    int pounds,ounces;
    // Initial Variables
    inputW();
    cin>>pounds>>ounces;
    
    //Display Outputs
    outputW(pounds,ounces);
}
void prob5(){       //Problem 5
    //Declare Variables
    int kg,g;
    // Initial Variables
    inputW2();
    cin>>kg>>g;
    
    //Display Outputs
    outputW2(kg,g);
}
void prob6(){       //Problem 6
    //Declare Variables
    char choice,repeat;
    float pounds,ounces,g,kg;
    // Initial Variables
    do{
        cout<<"Would you like to enter a weight in Lbs/Oz or Kg/G? [1,2]"<<endl;
        cin>>choice;

        //Calculate Weights
        if (choice=='1'){
            inputW();
            cin>>pounds>>ounces;
            outputW(pounds,ounces);
        }else if(choice=='2'){
            inputW2();
            cin>>kg>>g;
            outputW2(kg,g);
        }
        cout<<"Would you like to repeat this Program? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
}
void prob7(){       //Problem 7
    //Declare all Variables, no doubles
    float price, amtTndr;
    int pennies,n25,n10,n5,n1;
    
    //Input or initialize values
    price=9.14f;    //price is $9.14
    amtTndr=10.00f; //Amount paid
    
    //Output initial conditions
    pennies=(amtTndr-price+0.005)*DLRSPNY;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount Tendered = $"<<amtTndr<<endl;
    cout<<"Change returned = "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    n25=numCoin(pennies,QUARTER);
    pennies=remandr(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=remandr(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=remandr(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=remandr(pennies,PENNY);
    
    //Display Outputs
    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes    = "<<n10<<endl;
    cout<<"Number of Nickels  = "<<n5<<endl;
    cout<<"Number of Pennies  = "<<n1<<endl;
}
void prob8(){       //Problem 8
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
            shoot(aLive,aPk,cLive,bLive);
            shoot(bLive,bPk,cLive,aLive);
            shoot(cLive,cPk,aLive,bLive);
            remain=aLive+bLive+cLive;
        }while(remain>1);
        aCount+=aLive;
        bCount+=bLive;
        cCount+=cLive;
    }
    //Out Results
    cout<<"Out of 1000 games"<<endl;
    cout<<"Aaron   won "<<aCount<<" times"<<endl;
    cout<<"Bob     won "<<bCount<<" times"<<endl;
    cout<<"Charlie won "<<cCount<<" times"<<endl;
}
void prob9(){       //Problem 9
    //Declare Variables
    string sMonth,sDay;
    unsigned short year;//2 byte int value
    unsigned char day, month;//i byte int value
    //Initialize Variables
    cout<<"This program outputs the day of the week"<<endl;
    cout<<"given the date"<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
    
    //Process/Map inputs to outputs
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    
    //Output data
    cout<<"The date is "<<static_cast<int>(month)<<"/"<<static_cast<int>(day)<<"/"<<year<<endl;
    cout<<"The day of the week = "<<dyOfWek(month,day,year)<<endl;
}
//Functions for Problem 1-3/////////////////////////////////////////////////////
void input(){
    cout<<"Input the length in Meters and Centimeters"<<endl;
}
void output(int m,int cm){
    cout<<mToFt(m)<<" Feet and "<<cmToIn(cm)<<" Inches"<<endl;
}
void input2(){
    cout<<"Input the length in Feet and Inches"<<endl;
}
void output2(int feet,int inches){
    cout<<ftToM(feet)<<" Meters and "<<inToCm(inches)<<" Centimeters"<<endl;
}
float mToFt(int m){
    return static_cast<float>(m)/0.3048;
}
float cmToIn(int cm){
    return static_cast<float>(cm)/100/0.3048*12;
}
float ftToM(int feet){
    return static_cast<float>(feet)*0.3048;
}
float inToCm(int inches){
    return static_cast<float>(inches)/12*0.3048*100;
}
//Functions for Problems 4-6////////////////////////////////////////////////////
void inputW(){
    cout<<"Input the weight in Pounds and Ounces"<<endl;
}
void outputW(int pounds,int ounces){
    cout<<lbsToKg(pounds)<<" Kilograms and "<<ozToG(ounces)<<" Grams"<<endl;
}
void inputW2(){
    cout<<"Input the weight in Kilograms and Grams"<<endl;
}
void outputW2(int kg,int g){
    cout<<kgToLbs(kg)<<" Pounds and "<<gToOz(g)<<" Ounces"<<endl;
}
float lbsToKg(int pounds){
    return pounds/2.2046;
}
float ozToG(int ounces){
    return static_cast<float>(ounces)/16/2.2046*1000;
}
float kgToLbs(int kg){
    return kg*2.2046;
}
float gToOz(int g){
    return static_cast<float>(g)*16*2.2046/1000;
}
//Functions for Problem 7///////////////////////////////////////////////////////
int remandr(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}

int numCoin(int pennies,int denom){
    return pennies/denom;   //Number of coins of that denomination
}
//Functions for Problem 8///////////////////////////////////////////////////////
float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}
bool shoot(float pk){
    if(frand()>pk)return true;
    return false;
}
void shoot(bool aLive,float aPk,bool &cLive,bool &bLive){
    if(aLive){
        if(cLive)      cLive=shoot(aPk);
        else if(bLive) bLive=shoot(aPk);
    }
}
//Functions for Problem 9///////////////////////////////////////////////////////
string dyOfWek(char month,char day,unsigned int year){
    int weekDay=(day+gtMnVal(month,year)+gtYrVal(year)+gtCntVl(year));
    weekDay%=7;
    switch(weekDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
    }
    return "Saturday";
}
char gtMnVal(char month,unsigned int year){
    switch(month){
        case 1:{
            if(isLpYr(year))return 6;
            return 0;
        }
        case 2:{
            if(isLpYr(year))return 2;
            return 3;
        }
        case 3:case 11:{return 3;}
        case 4:case 7:{return 6;}
        case 5:return 1;
        case 6:return 4;
        case 8:return 2;
        case 9:case 12:{return 5;}
        case 10:return 0;
        
    }
}
char gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}
char gtCntVl(unsigned int year){
    year/=100;
    return (3-year%4)*2;
}
bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}
unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;
}
unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")   return 1;
    if(sMonth=="February")  return 2;
    if(sMonth=="March")     return 3;
    if(sMonth=="April")     return 4;
    if(sMonth=="May")       return 5;
    if(sMonth=="June")      return 6;
    if(sMonth=="July")      return 7;
    if(sMonth=="August")    return 8;
    if(sMonth=="September") return 9;
    if(sMonth=="October")   return 10;
    if(sMonth=="November")  return 11;
    return 12;
}