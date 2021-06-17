#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void perm(int n){
    vector<int> A(n);
    for(int i=0;i<n;i++){
        A[i] = ((i+1) % n) + 1;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<< " ";
    }
    cout<<"\n";
}

int main(void)
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        perm(n);
    }
    return 0;
}