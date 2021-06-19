#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while(left != right){
            left >>= 1;
            right >>=1;
            count++;
        }
        return left<<count;
    }
};

/*
5 -> 0000 0101
6 -> 0000 0110
7 -> 0000 0111
--------------- bitwise and
4 -> 0000 0100

right shift till left == right,
5 -> 0000 0010
7 -> 0000 0011
count = 1

5 -> 0000 0001
7 -> 0000 0001
count = 2

now left shifting 5
0000 0100 = 4 (ans)
*/