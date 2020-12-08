#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



void reverseStack(stack<int> &nums){
    //base condition
    if(nums.size() == 0)
        return;
    //hypothesis
    int temp = nums.top();
    nums.pop();
    //inductive step
    reverseStack(nums);//every element will be popped
    nums.push(temp);//and then they will be stored in a reverse manner
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
    
    reverseStack(nums);
    while(!nums.empty()){
        cout<<nums.top()<<" ";
        nums.pop();
    }
}