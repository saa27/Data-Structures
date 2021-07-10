#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        for(int i=0;i<a.size();i++){
            reverse(a[i].begin(),a[i].end());
            for(int j=0;j<a[i].size();j++){
                a[i][j] ^=1;
            }
        }
        return a;
    }
};