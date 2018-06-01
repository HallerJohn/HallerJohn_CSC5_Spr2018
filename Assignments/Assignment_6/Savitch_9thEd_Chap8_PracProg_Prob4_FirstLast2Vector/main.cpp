/* 
 * File:   CPPTemplate.cpp
 * Author: john Haller
 * Created on May 27, 2018, 8:30 PM
 * Purpose:  FirstLast2 Vector
 */

//System Libraries Here
#include <iostream>
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void fstLst2();
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //run program
    fstLst2();
    
    //Exit Program!
    
    return 0;
}

void fstLst2(){
    //Declare all Variables, no doubles
    vector <int> v;
    char repeat;
    int i=-1;
    int choice;
    //Input or initialize values
    do{
        cout<<"Enter an integer for the array"<<endl;
        cin>>choice;
        v.push_back(choice);
        i++;//used to keep track of last element in vector
        cout<<"Do you have more integers to input? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    cout<<endl;
    if(v[0]==2||v[i]==2)cout<<"True"<<endl;
    else cout<<"False"<<endl;
}