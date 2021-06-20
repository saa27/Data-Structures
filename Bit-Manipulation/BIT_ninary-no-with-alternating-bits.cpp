#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = n&1;
        n>>=1;
        
        while(n>0){
            int curr = n&1;
            if(last == curr)
                return false;
            
            last = curr;
            n>>=1;
        }
        return true;
    }
};