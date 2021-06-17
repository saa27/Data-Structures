#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void winnerIndex(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int, int> frequency;

    for(auto &a: v){
        cin>>a;
        frequency[a]++;
    }

    int winner = -1;

    for(int i=0;i<n;i++){
        if(frequency[v[i]] == 1 && (winner < 0 || v[i]<v[winner]))
            winner = i;
    }
    cout<< (winner<0 ? winner : winner + 1) <<"\n";
}

int main(void)
{
    int t,n,p;
    cin>>t;
    vector<int> a;
    for(int i=0;i<t;i++){
        winnerIndex();
    }

    return 0;
}