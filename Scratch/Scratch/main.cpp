/* 
 * File:   main.cpp
 * Author: John Haller
 * Created on May 1, 2018, 11:40 AM
 * Purpose:  calculate day of week for a certain date 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int,int,int,int);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d)return a;
    else if(b>a&&b>c&&b>d)return b;
    else if(c>a&&c>b&&c>d)return c;
    else if(d>a&&d>b&&d>c)return d;
}