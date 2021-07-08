#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        if(n==0)
            return 0;
        int i=0;
        for(int j=1;j<n;j++){
            if(a[i]!=a[j]){
                i++;
                a[i] = a[j];
            }
        }
        return i+1;
    }
};