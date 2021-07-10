#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n= nums.size();
        int l=0;
        int r = n-1;
        while(l < r){
            while(l < r && nums[l]%2 == 0){
                l++;
            }
            while(r > l && nums[r]%2 != 0){
                r--;
            }
            
            swap(nums[l],nums[r]);
            l++;
            r--;
           
        }
        return nums;
    }
};