#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;

    for(int i=2; i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            sum = sum + arr[i];
        }
    }

    cout<<sum;

    return 0;
}