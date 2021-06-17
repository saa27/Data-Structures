#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void toh(int s,int d,int h,int n){
    //move the only plate to the 3rd pole
    if(n==1){
        cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<"\n";
        return;
    }
    toh(s,h,d,n-1);//move the n-1 poles to the 2nd pole
    cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<"\n";//move the last plate to the 3rd pole
    toh(h,d,s,n-1);//finally move the n-1 plates from 2nd to 3rd pole
    return;
}

int main(){
    int n;
    cin>>n;
    int s=1;
    int h=2;
    int d=3;
    toh(s,d,h,n);
}