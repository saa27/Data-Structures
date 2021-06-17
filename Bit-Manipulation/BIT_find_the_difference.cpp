#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=t[0];
        for(int i=0;i<s.length();i++){
            ans = ans ^ s[i] ^ t[i+1];
        }
        return ans;
    }
};

// another way

class Solution {
public:
    char findTheDifference(string s, string t) {
        char x=0;
        for(auto ch: s){
            x ^=ch;
        }
        for(auto ch: t){
            x ^=ch;
        }
        return x;
    }
};