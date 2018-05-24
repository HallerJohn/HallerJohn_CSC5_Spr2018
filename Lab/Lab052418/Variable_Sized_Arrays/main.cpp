/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on May 24, 2018, 11:39 AM
 * Purpose:  variable sized arrays
/* 
 * File:   main.cpp
 * Author: Haller John
 * Created on May 24, 2018, 11:39 AM
 * Purpose:  variable sized arrays
 */

//System Libraries Here
#include <iostream>
#include<vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    // Declare all Variables Here
    int SIZE=10e4,q,n;
    // int SIZE=10,q,n;
    cin>>n>>q;
    vector<int> v[n];//,vector<int>(SIZE));
    // vector<vector<int>>v(n,vector<int>(SIZE));
    //int array[n][SIZE];
    
    //Input or initialize values Here
    for(int i=0;i<n;i++){
        int numElem, elem;
        cin>>numElem;
        for(int k=0;k<numElem;k++){
            cin>>elem;//v[i][k];
            v[i].push_back(elem);
        }
    }
    for(int query=0;query<q;query++){
        int index,element;
        cin>>index>>element;
        cout<<v[index][element]<<endl;
    }
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}
