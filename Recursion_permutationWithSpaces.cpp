#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


void permutation(string ip,string op){
    if(ip.length() == 0){//when the input is "", the op will be the answer
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    permutation(ip,op1);
    permutation(ip,op2);
    return;
}

int main(){
    string ip;
    cin>>ip;
    string op="";
    op.push_back(ip[0]);//we will push A
    ip.erase(ip.begin()+0);//and delete A
    permutation(ip,op);//rest is ame like finad all subsets problem
}