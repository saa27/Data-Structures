#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int cur) {
        vector<int> res;
        res.push_back(cur);
        for(auto i:encoded){
            res.push_back(cur ^= i);
        }
        return res;
    }
};
/*
Explanation
cur means the current decoded element.

For each element we have
A[i] = res[i] ^ res[i+1]
A[i] ^ A[i] ^ res[i+1] = res[i] ^ res[i+1] ^ A[i] ^ res[i+1]
res[i+1] = res[i] ^ A[i]

So we use the conslusion above,
iterate the input encoded array A,
update res[i + 1] = res[i] ^ A[i].
*/