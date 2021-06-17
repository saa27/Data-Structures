#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        int x,count;
        for(int i=1;i<=n;i++){
            x = i;
            count =0;
            while(x){
                x= x & (x-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }