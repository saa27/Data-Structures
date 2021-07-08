#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int n = a.size();
        if(n==0)
            return 0;
        int i=0;
        for(int j=0;j<n;j++){
            if(a[j] != val){
                a[i] = a[j];
                i++;
            }
        }
        return i;
    }
};