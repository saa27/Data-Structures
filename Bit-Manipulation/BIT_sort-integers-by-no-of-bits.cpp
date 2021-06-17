#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   static bool compare(int a,int b){
        int count1=0,count2=0;
       int a1=a,b1=b;
        while(a1){
            a1 = a1 & (a1-1);
            count1++;
        }
        while(b1){
            b1 = b1 & (b1-1);
            count2++;
        }
       if(count1 == count2)
           return (a<b);
        return (count1<count2);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};