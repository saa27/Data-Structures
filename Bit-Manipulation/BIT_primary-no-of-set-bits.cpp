#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int i){
        int count =0;
        while(i){
            i = i& i-1;
            count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        vector<int> v = {2,3,5,7,11,13,17,19};
        int ans =0;
        for(int i=left;i<=right;i++){
            int countOfBits = helper(i);
            
            if(count(v.begin(), v.end(), countOfBits))
                ans++;
        }
        return ans;
    }
};

