#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> t;
    int solve(vector<int> &nums,int total, int n){
        
        if(total == 0)
            return t[n][total] = 0;
        if(n == 0)
            return 100000;
        
        if(t[n][total] != -1)
            return t[n][total];
        
        if(nums[n-1] <= total)
            return t[n][total] = min(1+solve(nums,total-nums[n-1],n),
                      solve(nums,total,n-1));
        
        else
            return t[n][total] = solve(nums,total,n-1);
    }
    int numSquares(int total) {
        vector<int> nums;
        for(int i = 0; i < sqrt(total); i++){
            nums.push_back((i + 1) * (i + 1));
        }
        
        t.clear();
        t.resize(nums.size() + 1, vector<int> (total + 1, -1));
        return solve(nums,total,nums.size());
        
    }
};