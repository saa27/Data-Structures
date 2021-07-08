#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int p1= m-1, p2 = n-1, i = m+n-1;
        while(p2>=0){
            if(p1 >=0 && a[p1]>b[p2]){
                a[i] = a[p1];
                i--;
                p1--;
            }else{
                a[i] = b[p2];
                i--;
                p2--;
            }
        }
    }
};