#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


    vector<vector<int>> res;

    void solve(vector<int> ip,vector<int> op){
        if(ip.size() == 0){
            res.push_back(op);
            return;
        }
        vector<int> op1= op;
        vector<int> op2= op;
        op2.push_back(ip[0]);
        
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
        return;
            
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        vector<int> op;
        solve(ip,op);
        
        vector<vector<int>> finalRes;
        map<vector<int>,int>mp;
        for(int i=0;i<res.size();i++)
        {
            sort(res[i].begin(),res[i].end());
            mp[res[i]]++;
        }
        for(auto i:mp)
        {
            finalRes.push_back(i.first);
        }
        return finalRes;
        
    }
    
    

int main(){
    vector<int> v{1,2,2};
    subsetsWithDup(v);
        

}