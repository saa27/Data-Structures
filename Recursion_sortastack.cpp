#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &nums, int key){
    if(nums.size()==0 || nums.top()<=key)
        {nums.push(key);
        return;}
    int el = nums.top();
    nums.pop();
    insert(nums,key);
    nums.push(el);
    return;
}

void sort(stack<int> &nums){
    if(nums.size() == 1)
        return;
    int topNum = nums.top();
    nums.pop();
    sort(nums);
    insert(nums,topNum);
    return;
}

int main(){
    stack<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push(x);
    }
    sort(nums);
    while(!nums.empty()){
        cout<<nums.top()<<" ";
        nums.pop();
    }
}