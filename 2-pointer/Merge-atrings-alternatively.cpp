#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.length();
        int b = word2.length();
        int p1=0;
        int p2=0;
        string ans="";
        
        while(p1<a || p2<b){
            if(p1<a)
                ans += word1[p1++];
            if(p2<b)
                ans += word2[p2++];
        }
        return ans;
    }
};