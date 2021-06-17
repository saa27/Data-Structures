#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &nums, int key){
    if(nums.size()==0 || nums[nums.size()-1]<=key)
        {nums.push_back(key);
        return;}
    int el = nums[nums.size()-1];
    nums.pop_back();
    insert(nums,key);
    nums.push_back(el);
    return;
}

void sort(vector<int> &nums){
    if(nums.size() == 1)
        return;
    int lastNum = nums[nums.size()-1];
    nums.pop_back();
    sort(nums);
    insert(nums,lastNum);
    return;
}

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}