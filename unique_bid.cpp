#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void winnerIndex(vector<int> v){
    map<int, int> frequency;

    for(auto &a: v){
        frequency[a]++;
    }

    int winner = -1;
    for(int i=0;i<v.size();i++){
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
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>p;
            a.push_back(p);
        }
        winnerIndex(a);
    }

    return 0;
}