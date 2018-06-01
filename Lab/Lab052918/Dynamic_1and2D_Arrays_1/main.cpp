/* 
 * File:   main.cpp
 * Author: Haller, John
 * Created on May 29, 2018, 11:26 AM
 * Purpose:  Static 1 and 2 D Arrays
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
int *fillAry(int);
void prntAry(int *,int,int);
int **fillAry(int,int);
void prntAry(int **,int,int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int size=100;
    int rows=10;
    int cols=10;
    
    
    //Initialize Variables
    int *array=fillAry(size);
    int **array2=fillAry(rows,cols);
    
    //Process/Map inputs to outputs
    prntAry(array,size,10);
    prntAry(array2,rows,cols);
    
    //Cleanup
    delete []array;
    //de-allocate cols
    for(int row=0;row<rows;row++){
        delete []array2[row];
    }
    //De-allocate rows
    delete []array2;
    //Output data
    
    //find and element
    
    //Exit stage right!
    return 0;
}
int *fillAry(int n){
    //Allocate memory
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    return a;
}
void prntAry(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int ** fillAry(int rows, int cols){
    //Allocate rows
    int **a=new int*[rows];
    //Allocate cols
    for(int row=0;row<rows;row++){
        a[row]=new int[cols];
    }
    //Fill Array
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            a[row][col]=rand()%90+10;
        }
    }
    return a;
}
void prntAry(int **a,int rows, int cols){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}