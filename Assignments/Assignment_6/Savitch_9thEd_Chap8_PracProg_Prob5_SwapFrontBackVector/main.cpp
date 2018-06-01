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
void swpFtBk();
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //run program
    swpFtBk();
    
    //Exit Program!
    
    return 0;
}

void swpFtBk(){
    //Declare all Variables, no doubles
    vector<int>v;
    char repeat;
    int i=-1;
    int input;
    //Input or initialize values
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        v.push_back(input);
        i++;//used to keep track of the last element in the vector
        cout<<"Do you have more integers to input? [Y/N]"<<endl;
        cin>>repeat;
    }while(repeat=='Y'||repeat=='y');
    //Display Outputs
    cout<<"The first element in the vector is "<<v[0]<<endl;
    cout<<"The second element in the vector is "<<v[i]<<endl;
    int temp;
    temp=v[0];
    v[0]=v[i];
    v[i]=temp;
    cout<<"The new first element in the vector is "<<v[0]<<endl;
    cout<<"The new second element in the vector is "<<v[i]<<endl;
}