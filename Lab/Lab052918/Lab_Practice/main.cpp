#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int SIZE=10e5;
    int n,q;
    int index,element;
    cin>>n>>q;
    vector<int>v;
    for(int m=0;m<n;m++){
        int k;
        cin>>k;
        v.push_back(k);
        for(int j=0;j<k;j++){
            int i;
            cin>>i;
            v.push_back(i);
        }
    }
    // for(int f=0;f<v.size();f++){
    //     cout<<"(" << f << "," << v[f] << "), ";
    // }
    // cout << endl;
    
    int arrIdx = 0, //arr idex we are looking at now
    arrSize = 0, //size of the array we are readin\g
    wantIdx = 0, //arr index we want to find
    find = -1; //this is the index we want to find
    for( int i = 0; i < q; i++ ){
        arrSize = v[i];
        arrIdx =0;
        cin >> wantIdx;
        int len = v.size();
        cin >> find;
        for( int j = 0; j < len; j++ ){
            if( wantIdx == arrIdx ){
                // cout << j + 1 + find << ", ";
                cout << v[j + 1 + find] << endl;
                len = 0;
            } else {
                arrSize = v[j];
                ++arrIdx;
                j += arrSize;
            }
        }
    }
    return 0;
}