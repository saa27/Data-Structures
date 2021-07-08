#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //EASY APPROACH

        // for(int i=0;i<nums.size();i++){
        //     nums[i] = pow(nums[i],2);
        // }
        // sort(nums.begin(),nums.end());
        // return nums;


        // 2-POINTER APPROACH
        int n= nums.size();
        vector<int> res(n);
        int l = 0;
        int r = n-1;
        for(int k= n-1;k>=0;k--){
            if(abs(nums[r]) > abs(nums[l])){
                res[k] = pow(nums[r],2);
                r--;
            }else{
                res[k] = pow(nums[l],2);
                l++;
            }
        }
        return res;
    }
};