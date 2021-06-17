#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0){
            if((num & 1) == 0){ // check if number is even
                num = num>>1; // divide by 2
            }    
            else{
                num = num ^ 1; // subtract 1
            }    
            count++;
        }
        return count;
    }
};