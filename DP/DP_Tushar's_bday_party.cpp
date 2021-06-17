#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int fun(int w,const vector<int> &val,const vector<int> &cost, int i)
{   
    if(i<0)
    {
        if(w==0)
        return 0;
        
        return 10000000;
    }
    
    if(dp[w][i]!=-1)
    return dp[w][i];
    
    if(w-val[i]>=0)
    {
        int num1 = fun(w-val[i],val,cost,i) + cost[i];
        int num2 = fun(w,val,cost,i-1);
        
        return dp[w][i] = min(num1,num2);
    }
    else
        return dp[w][i] = fun(w,val,cost,i-1);
}

int solve(const vector<int> &v, const vector<int> &val, const vector<int> &cost) 
{
    int ans = 0;
    
    int n = val.size();
    dp.clear();
    dp.resize(1001, vector<int> (n+1,-1));
    
    for(auto i:v)
        ans+=fun(i,val,cost,n-1);
    
    return ans;
}