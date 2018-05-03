/* 
 * File:   main.cpp
 * Author: YOUR NAME GOES HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross

    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;

    //Draw the shape
    if(shape=='b'&&x%2!=0){     //backward slash and odd
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(col==row)cout<<x-col+1;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }
    }else if(shape=='b'){       //backward slash and even
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(col==row)cout<<col;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }
    }
    if(shape=='f'&&x%2!=0){     //forward slash and odd
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(col==x+1-row)cout<<x-col+1;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }       
    }else if(shape=='f'){       //forward slash and even
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(col==x+1-row)cout<<col;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }
    }
    if(shape=='x'&&x%2!=0){     //X and odd
        for(int row=1;row<=x;row++){        //rows  
            for(int col=1;col<=x;col++){    //columns
                if(col==row||col==x+1-row)cout<<x-col+1;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }
    }else if(shape=='x'){       //X and even
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(col==row||col==x+1-row)cout<<col;  //determining where to output 
                else cout<<" ";

            }
        cout<<endl;
        }
    }
}

void problem2(){
    //Declare all Variables Here
    char char1,char2,char3,char4;

    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>char1>>char2>>char3>>char4;

    //Histogram Here
    switch(char4){      //switch for thoughsands char
        case '0':{cout<<"0 "<<endl;break;}
        case '1':{cout<<"1 *"<<endl;break;}
        case '2':{cout<<"2 **"<<endl;break;}
        case '3':{cout<<"3 ***"<<endl;break;}
        case '4':{cout<<"4 ****"<<endl;break;}
        case '5':{cout<<"5 *****"<<endl;break;}
        case '6':{cout<<"6 ******"<<endl;break;}
        case '7':{cout<<"7 *******"<<endl;break;}
        case '8':{cout<<"8 ********"<<endl;break;}
        case '9':{cout<<"9 *********"<<endl;break;}
        default:{cout<<char4<<" ?"<<endl;break;}
    }
    switch(char3){      //switch for hundreds char
        case '0':{cout<<"0 "<<endl;break;}
        case '1':{cout<<"1 *"<<endl;break;}
        case '2':{cout<<"2 **"<<endl;break;}
        case '3':{cout<<"3 ***"<<endl;break;}
        case '4':{cout<<"4 ****"<<endl;break;}
        case '5':{cout<<"5 *****"<<endl;break;}
        case '6':{cout<<"6 ******"<<endl;break;}
        case '7':{cout<<"7 *******"<<endl;break;}
        case '8':{cout<<"8 ********"<<endl;break;}
        case '9':{cout<<"9 *********"<<endl;break;}
        default:{cout<<char3<<" ?"<<endl;break;}
    }
    switch(char2){      //switch for tens char
        case '0':{cout<<"0 "<<endl;break;}
        case '1':{cout<<"1 *"<<endl;break;}
        case '2':{cout<<"2 **"<<endl;break;}
        case '3':{cout<<"3 ***"<<endl;break;}
        case '4':{cout<<"4 ****"<<endl;break;}
        case '5':{cout<<"5 *****"<<endl;break;}
        case '6':{cout<<"6 ******"<<endl;break;}
        case '7':{cout<<"7 *******"<<endl;break;}
        case '8':{cout<<"8 ********"<<endl;break;}
        case '9':{cout<<"9 *********"<<endl;break;}
        default:{cout<<char2<<" ?"<<endl;break;}
    }
    switch(char1){      //switch for ones char
        case '0':{cout<<"0 "<<endl;break;}
        case '1':{cout<<"1 *"<<endl;break;}
        case '2':{cout<<"2 **"<<endl;break;}
        case '3':{cout<<"3 ***"<<endl;break;}
        case '4':{cout<<"4 ****"<<endl;break;}
        case '5':{cout<<"5 *****"<<endl;break;}
        case '6':{cout<<"6 ******"<<endl;break;}
        case '7':{cout<<"7 *******"<<endl;break;}
        case '8':{cout<<"8 ********"<<endl;break;}
        case '9':{cout<<"9 *********"<<endl;break;}
        default:{cout<<char1<<" ?"<<endl;break;}
    }
}

void problem3(){
    //Declare all Variables Here
    unsigned short number;
    int n1000s,n100s,n10s,n1s;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/1000;     //determining thoughsands digit
    number-=n1000s*1000;    //subtract from total value
    n100s=number/100;       //determining hundreds digit
    number-=n100s*100;      //subtract from total value
    n10s=number/10;         //determining tens digit
    number-=n10s*10;        //subtract from total value
    n1s=number;             //remainder is ones digit
    //Output the check value
    switch (n1000s){        //switch for thoughsands place
        case 1:cout<<"One Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 3:cout<<"Three Thousand ";break;
        default: break;
    }
    switch (n100s){         //switch for hundreds place
        case 1:cout<<"One Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 9:cout<<"Nine Hundred ";break;
        default: break;
    }
    switch (n10s){      //switch for tens place
        case 1:{
            switch(n1s){    //if tens n10s is 1, since the teens are weird
                case 0:cout<<"Ten ";break;
                case 1:cout<<"Eleven ";break;
                case 2:cout<<"Twelve ";break;
                case 3:cout<<"Thirteen ";break;
                case 4:cout<<"Fourteen ";break;
                case 5:cout<<"Fifteen ";break;
                case 6:cout<<"Sixteen ";break;
                case 7:cout<<"Seventeen ";break;
                case 8:cout<<"Eighteen ";break;
                case 9:cout<<"Nineteen ";break;
            }
        }break;             
        case 2:cout<<"Twenty ";break;
        case 3:cout<<"Thirty ";break;
        case 4:cout<<"Fourty ";break;
        case 5:cout<<"Fifty ";break;
        case 6:cout<<"Sixty ";break;
        case 7:cout<<"Seventy ";break;
        case 8:cout<<"Eighty ";break;
        case 9:cout<<"Ninety ";break;
        default: break;
    }
    if(n10s!=1){    //if n10s is 1 than that is the end of the number
        switch (n1s){       //switch for ones digit
            case 1:cout<<"One ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            default: break;
        }
    }
    
    cout<<"and no/100's Dollars"<<endl; //output you gave us
}

void problem4(){
    //Declare all Variables Here
    char package,chpPack;   //chosen pack and cheapest pack
    unsigned short hours;   //hours used
    float aCost,bCost,cCost,chpCost,chsCost;    //package a,b,c costs and the cheapest cost and the chosen cost
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    //Calculating cost for package A
    if(hours<=10)aCost=16.99;//<=10 hours
    if(hours>10&&hours<=20)aCost=(16.99+(hours-10)*0.95);//10<hours<=20
    if(hours>20)aCost=(16.99+10*0.95+(hours-20)*0.85);//20<hours
    //
    //Calculating cost for package B
    if(hours<=20)bCost=26.99;//<=20 hours
    if(hours>20&&hours<=30)bCost=(26.99+(hours-20)*0.74);//20<hours<=30
    if(hours>30)bCost=(26.99+10*0.74+(hours-30)*0.64);//30<hours
    
    //Calculating cost for package C
    cCost=36.99;    //Any hours
    //Calculating Cheapest cost/package
    cout<<fixed<<setprecision(2)<<showpoint;//io formatting
    if(aCost<bCost&&aCost<cCost){chpPack='A';chpCost=aCost;}//setting cheapest pack and cheapest cost
    if(bCost<aCost&&bCost<cCost){chpPack='B';chpCost=bCost;}//setting cheapest pack and cheapest cost
    if(cCost<aCost&&cCost<bCost){chpPack='C';chpCost=cCost;}//setting cheapest pack and cheapest cost
    //Output the Charge
    if(package=='a'||package=='A'){chsCost=aCost;cout<<"$"<<aCost;}//setting chosen cost and outputting current cost user is paying
    else if(package=='b'||package=='B'){chsCost=bCost;cout<<"$"<<bCost;}//setting chosen cost and outputting current cost user is paying
    else if(package=='c'||package=='C'){chsCost=cCost;cout<<"$"<<cCost;}//setting chosen cost and outputting current cost user is paying
    //Output the cheapest package and the savings
    cout<<" "<<chpPack<<" $"<<chsCost-chpCost<<endl;//output the cheapest pack and the difference between cheapest cost and chosen cost
}

void problem5(){
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float grssPay;              //Final pay
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20)grssPay=payRate*hrsWrkd;                                             //calculation for hrsWrkd<20
    if(hrsWrkd>20&&hrsWrkd<=40)grssPay=(20*payRate)+(hrsWrkd-20)*1.5*payRate;      //Calculation for 20<hrsWrkd<=40
    if(hrsWrkd>40)grssPay=(20*payRate)+(20*1.5*payRate)+(hrsWrkd-40)*2*payRate;    //Calculation for 40<hrsWrkd
    
    //Output the check
    cout<<fixed<<setprecision(2)<<showpoint;        //io formatting
    cout<<"$"<<grssPay<<endl;                       //output results
}

void problem6(){
    //Declare all Variables Here
    float x,fx,term,fact;
    int nterms;
    float cntr;

    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    fact=1;     //initialize factorial to 1
    cntr=2;     //initialize cntr to 2
    term=1;     //initialize term to 1

    //Calculate Sequence sum here
    for(int i=1,sign=-1;i<=nterms;i++,term+=2){ //start of the sequence
        sign*=-1;                               //flip sign to either add or subtract
        if(i>1){                                //only start generation of factorial after first term
            for(int u=1;u<=2;u++,cntr++){       //start of the factorial generation
                fact*=cntr;                     //factorial    
            }
        }
        fx+=pow(x,term)/fact*static_cast<float>(sign);      //equeation for the sequence
    }
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    //cout<<fact<<endl;
    cout<<fx<<endl;
}