#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//question
//      k=1 k=2 k=3 k=4 k=5 k=6 k=7 k=8
//n=1   0    
//n=2   0   1
//n=3   0   1   1   0
//n=4   0   1   1   0   1   0   0   1

//i.e. for 0-> 0 1 and for 1-> 1 0

int kthGrammar(int n, int k) {
        //base step
        if(n==1 && k==1)
            return 0;
        int mid = pow(2,n-1)/2;
        //induction
        if(k<=mid)
            return kthGrammar(n-1,k);//same to same as previous row if k is of 1st half
        else
            return !kthGrammar(n-1,k-mid);//1's complement of the previous row if k is of 2nd half
    }

int main(){
    int n,k;
    cin>>n>>k;
    cout<<kthGrammar(n,k);
}