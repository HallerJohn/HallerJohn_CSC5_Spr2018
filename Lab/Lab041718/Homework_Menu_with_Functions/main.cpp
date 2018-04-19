/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on April 17th, 2018, 10:40 AM
 * Purpose:  Menu with construct examples
 */

//System Libraries
#include <iostream>
#include <iomanip>  //format
#include <cstdlib>  //rand function
#include <ctime>    //set time
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=6.673e-8f;       //cm^3/(g*sec^2)
const float CMTOM=0.01f;             //cm to m
const float MTOF=3.281f;              //meters to feet
const float LBSLUG=32.174f;          //pounds to slugs
const float LGAL=0.264179f;          //liters to gallons

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    char choice;
    do{
    menu();
    cin>>choice;
  
    //Process/Map inputs to outputs
    switch(choice){
        case '1':{prblm1();break;}
        case '2':{prblm2();break;}
        case '3':{prblm3();break;}
        case '4':{prblm4();break;}
        case '5':{prblm5();break;}
        case '6':{prblm6();break;}
        case '7':{prblm7();break;}
        case '8':{prblm8();break;}
        case '9':{prblm9();break;}
        default:cout<<"Exiting Menu"<<endl;
    }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<endl;
    cout<<"Choose from the following menu"<<endl;
    cout<<"Type 1 for Gaddis_8thEd_Chap5_Prob7_PenniesForPay"<<endl;
    cout<<"Type 2 for "
            "Savitch_9thEd_Chap4_PracProb_Prob7_AttractionBetweenBodies"<<endl;
    cout<<"Type 3 for Savitch_9thEd_Chap4_PracProg_Prob1_MilesPerGallon"<<endl;
    cout<<"Type 4 for Savitch_9thEd_Chap4_PracProg_Prob2_ModifiedMPG"<<endl;
    cout<<"Type 5 for Savitch_9thEd_Chap4_PracProg_Prob3_StockPrices"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap4_PracProg_Prob4_RateOfInflation"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap4_PracProg_Prob5_ModifiedInflation"
            <<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap4_ProgProj_Prob2_ClothSizes"<<endl;
    cout<<"Type 9 for Savitch_9thEd_Chap4_ProgProj_Prob2_ModifiedClotheSizes"
            <<endl;
    cout<<"Type any letter to end program"<<endl;
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    cout<<"Independent-If Example"<<endl;
        //Declare Variables
        unsigned int totPay,pyPrDay;    //pennies of pay
        char numDays=31;              //most number of days in a month
        //Initial Variables
        pyPrDay=1;                            //one penny on first day
        totPay=pyPrDay;                       //total amount


        //Map/Process Inputs to Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day         Pay         Total"<<endl;
        for(int day=1;day<=numDays;day++){
            cout<<setw(2)<<day
                    <<setw(12)<<pyPrDay/100.0f
                    <<setw(14)<<totPay/100.0f<<endl;
            pyPrDay*=2;
            totPay+=pyPrDay;
        }
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm2(){
    //Declare Variables
    float myMass,ertMass,rEarth,myWt, myWtCnv;
    //Initial Variables
    myMass=6;               //in slugs
    myWtCnv=myMass*LBSLUG;
    ertMass=5.972e27f;      //in grams
    rEarth=6.371e6f;        //in meters

    //Map/Process Inputs to Outputs
    myWt=GRAVITY*CMTOM*CMTOM*CMTOM*myMass*ertMass*MTOF/
            (rEarth*rEarth);

    //display outputs
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" Slugs is equal to "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" Slugs is equal to "<<myWtCnv<<" lbs"<<endl;
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm3(){
    //Declare Variables
    float miles,liters,mileGal;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input how many liters of gasoline were consumed"
                <<endl;
        cin>>liters;
        cout<<"Input how many miles you traveled"<<endl;
        cin>>miles;
        //Map/Process Inputs to Outputs
        mileGal=miles/(liters*LGAL);
         //Display Outputs
        cout<<"Your car delivered "<<mileGal<<" miles/gallon"<<endl;
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm4(){
    float miles1,liters1,milGal1,miles2,liters2,milGal2;
                char repeat;
                // Initial Variables
                do{
                    cout<<"Input how many liters of gasoline were consumed for "
                            "car 1"<<endl;
                    cin>>liters1;
                    cout<<"Input how many miles you traveled in car 1"<<endl;
                    cin>>miles1;
                    //Map/Process Inputs to Outputs
                    milGal1=miles1/(liters1*LGAL);
                    cout<<"Input how many liters of gasoline were consumed for "
                            "car 2"<<endl;
                    cin>>liters2;
                    cout<<"Input how many miles you traveled in car 2"<<endl;
                    cin>>miles2;
                    milGal2=miles2/(liters2*LGAL);
                     //Display Outputs
                    cout<<fixed<<setprecision(2);
                    cout<<"Car 1 delivered "<<milGal1<<" miles/gallon"<<endl;
                    cout<<"Car 2 delivered "<<milGal2<<" miles/gallon"<<endl;
                    if(milGal1>milGal2)cout<<"Car 1 is more efficient"<<endl;
                    else if(milGal1<milGal2)cout<<"Car 2 is more efficient"
                            <<endl;
                    else if(milGal1==milGal2)cout<<"Both cars have the same "
                            "efficiency"
                            <<endl;
                    cout<<"Would you like to repeat this program (Y/N)"<<endl;
                    cin>>repeat;
                }while(repeat=='Y'||repeat=='y');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 5
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    //Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    int dolStk, numStk, denStk; //stock price % num/den
    int numShrs;                //number of shares
    float valStk;               //value of the stocks in $'s
    char again;                 //determine if we repeat the program

    //Initial Variables
    denStk=8;

    //Map/Process Inputs to Outputs
    do{
        //Randomly choose stock price
        dolStk=rand()%1000;     //0-999
        numStk=rand()%8;        //(0-7)/8
        numShrs=rand()%90+10;   //10-99

        //calculate the stock value
        valStk=numShrs*(dolStk+static_cast<float>(numStk)/denStk);

    //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The number of shares of stock = "<<numShrs<<endl;
        cout<<"The value of each stock/share = $"<<dolStk<<" "
                <<numStk
                <<"/"<<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStk<<endl;
        //prompt user to see if they want to continue
        cout<<endl<<"Would you like to continue?[Y/N]"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 6
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm6(){
    //Declare Variables
    float oldPric,newPric,infRate,costDif;
    char repeat;
    //Initial Variables
    do{
        cout<<"Input the cost of the item 1 year ago"<<endl;
        cin>>oldPric;
        cout<<"Enter the current price of the item"<<endl;
        cin>>newPric;
        //Map/Process Inputs to Outputs
        costDif=newPric-oldPric;
        infRate=costDif/oldPric*100;
        //display outputs
        cout<<"The price of the item 1 year ago is = $"<<oldPric
                <<endl;
        cout<<"The current price of the item is    = $"<<newPric
                <<endl;
        cout<<"The rate of inflation is            = "<<fixed
                <<setprecision(2)
                <<showpoint<<infRate<<"%"<<endl;
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 7
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm7(){
    //Declare Variables
    float oldPric,newPric,infRate,costDif;
    char repeat;

    //Initial Variables
    do{
        cout<<"Input the cost of the item 1 year ago"<<endl;
        cin>>oldPric;
        cout<<"Enter the current price of the item"<<endl;
        cin>>newPric;
        //Map/Process Inputs to Outputs
        costDif=newPric-oldPric;
        infRate=costDif/oldPric;

        //display outputs
        cout<<"The price of the item 1 year ago is     = $"
                <<oldPric<<endl;
        cout<<"The current price of the item is        = $"
                <<newPric<<endl;
        cout<<"The rate of inflation is                = "<<fixed
                <<setprecision(2)
                <<showpoint<<infRate*100<<"%"<<endl;
        for(int year=1;year<=2;year++){
            newPric=newPric*(1+infRate);   
            cout<<"The cost of this item in "<<year<<" year(s) will"
                    " be = $"
                    <<newPric<<endl;
        }
        cout<<"Would you like to repeat this program (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 8
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm8(){
    //Declare Variables
    float hat,jacket,waist;
    short height,weight;
    int age;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input your height in inches"<<endl;
        cin>>height;
        cout<<"Input your weight in pounds"<<endl;
        cin>>weight;
        cout<<"Input your age in years"<<endl;
        cin>>age;
        //Map/Process Inputs to Outputs
        hat=(weight/height)*2.9;
        jacket=static_cast<float>(height*weight)/288+(0.125)*
                ((age-30)/10);
        waist=weight/5.7+(0.1)*((age-28)/2);
        //Display Outputs
        cout<<fixed<<setprecision(2);
        cout<<"Your hat size is "<<hat<<endl;
        cout<<"Your jacket size is "<<jacket<<" inches"<<endl;
        cout<<"Your waist size is "<<waist<<" inches"<<endl;
        cout<<"Would you like to repeat this program? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='T'||repeat=='t');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                   Problem 9
//Input:  -> Parameters in Argument List, Description/Range/Units
//output: -> Return. Description/Range/Units
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm9(){
    //Declare Variables
    float hat,jacket,waist;
    short height,weight;
    int age;
    char repeat;
    // Initial Variables
    do{
        cout<<"Input your height in inches"<<endl;
        cin>>height;
        cout<<"Input your weight in pounds"<<endl;
        cin>>weight;
        cout<<"Input your age in years"<<endl;
        cin>>age;
        //Map/Process Inputs to Outputs
        hat=(weight/height)*2.9;
        jacket=static_cast<float>(height*weight)/288+(0.125)*
                ((age-30)/10);
        waist=weight/5.7+(0.1)*((age-28)/2);
        //Display Outputs
        cout<<fixed<<setprecision(2);
        cout<<"Your hat size is "<<hat<<endl;
        cout<<"Your jacket size is "<<jacket<<" inches"<<endl;
        cout<<"Your waist size is "<<waist<<" inches"<<endl;
        jacket=static_cast<float>(height*weight)/288+(0.125)*
                ((age-20)/10);
        waist=weight/5.7+(0.1)*((age-18)/2);
        cout<<"Your jacket size in 10 years will be "<<jacket
                <<" inches"<<endl;
        cout<<"Your waist size in 10 years will be is "<<waist
                <<" inches"<<endl;
        cout<<"Would you like to repeat this program? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='T'||repeat=='t');
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
