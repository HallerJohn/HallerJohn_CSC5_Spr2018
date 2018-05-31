/* 
 * File:   main.cpp
 * Author: Haller, John
 * Created on May 31, 2018, 10:30 AM
 * Purpose:  Static 1 and 2 D Arrays
 *              With Structures
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array1D.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
Array1D *fillAry(int);
void prntAry(Array1D *,int);
Array2D fillAry(int,int);
void prntAry(Array2D *);


//Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int size=100;
    int rows=10;
    int cols=10;
    
    
    //Initialize Variables
    Array1D *array=fillAry(size);
    int **array2=fillAry(rows,cols);
    
    //Process/Map inputs to outputs
    prntAry(array,10);
    prntAry(array2,rows,cols);
    
    //Cleanup
    delete []array->data;
    delete array;
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
Array1D *fillAry(int n){
    //Allocate memory
    Array1D *a=new Array1D;
    a->size=n;
    a->data=new int[a->size];
    for(int i=0;i<n;i++){
        a->data[i]=rand()%90+10;
    }
    return a;
}
void prntAry(Array1D *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
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