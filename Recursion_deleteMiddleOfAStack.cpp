#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// void insert(stack<int> &nums, int key){
//     if(nums.size()==0 || nums.top()<=key)
//         {nums.push(key);
//         return;}
//     int el = nums.top();
//     nums.pop();
//     insert(nums,key);
//     nums.push(el);
//     return;
// }

void solve(stack<int> &nums,int k){
    if(nums.size() == 0)
        return;
    if(nums.size() == k)//base condition, when size of stack is 3 i.e. the element to be deleted,
        {   nums.pop();//then pop that element and return
            return;}
    //hypothesis
    int topNum = nums.top();
    nums.pop();
    solve(nums,k);
    //inductive step
    nums.push(topNum);
    return;
}

int main(){
    stack<int> nums;
    int n,k;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push(x);
    }
    k=n/2 + 1;
    solve(nums,k);
    while(!nums.empty()){
        cout<<nums.top()<<" ";
        nums.pop();
    }
}