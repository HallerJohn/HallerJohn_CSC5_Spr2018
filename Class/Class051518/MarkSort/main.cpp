/* 
 * File:   main.cpp
 * Author: Haller, John
 * Created on May 15, 2018, 10:01 AM
 * Purpose:  Investigate Sorts
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);
void swap(int &,int &);
void swapLgc(int &,int &);
void smlLst(int [],int,int);
int binSrch(int [],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int size=100;
    int array[size];
    
    
    //Initialize Variables
    fillAry(array,size);
    
    //Process/Map inputs to outputs
    prntAry(array,size,10);
    mrkSort(array,size);
    
    //Output data
    prntAry(array,size,10);
    
    //find and element
    int find=50;
    cout<<find<<" Was found at index = "
            <<binSrch(array,size,find)<<endl;
    //Exit stage right!
    return 0;
}
void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[i]<a[pos])swap(a[i],a[pos]);
    }
}
void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}
void swapLgc(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int binSrch(int a[],int n,int val){
    //Declare and initialize variables
    int beg,end,middle;
    beg=0;
    end=n;
    //Loop and find
    do{
        middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]>val){
            end=middle-1;
        }else{
            beg=middle+1;
        }
    }while(end>=beg);
    return -1;
}