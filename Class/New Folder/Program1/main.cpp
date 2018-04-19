/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 19, 2016, 9:07 AM
 * Purpose:  Roman numeral conversion program
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THOUSAN=1000; //thousands
const int HUNDRED=100;  //hundreds
const int TEN=10;       //tens

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char n1000s,n100s,n10s,n1s;
    unsigned short x;
    string roman;
    
    //Input or initialize values Here
    cout<<"This program converts a number to its Roman Numeral Equivalent"
            <<endl;
    do{
        cout<<"Input an integer value between 1-3000"<<endl;
        cin>>x;
    }while(x<1||x>3000);
    
    //calculate number of thousands, hundreds, tens, and ones
    n1000s=x/THOUSAN;
    x-=n1000s*THOUSAN;
    n100s=x/HUNDRED;
    x-=n100s*HUNDRED;
    n10s=x/TEN;
    x-=n10s*TEN;
    n1s=x;
    //output thousands converted
    switch(n1000s){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';
    }
    //output thousands converted
    switch(n100s){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+='D';break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';
    }
    switch(n10s){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+='L';break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';
    }
    switch(n1s){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+='V';break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';
    }
    //Output Located Here
    cout<<"Roman equivalent = "<<roman<<endl;
    //Exit
    return 0;
}

