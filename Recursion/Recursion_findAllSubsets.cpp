#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


//using tree method
//example using "ab"
void subset(string ip,string op){
    if(ip.length() == 0){//when the input is "", the op will be the answer
        cout<<"\""<<op<<"\""<<"\n";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);//adding the first character of the ip in the op2
    ip.erase(ip.begin()+0);//since for first character decision has been taken, it can be removed
    subset(ip,op1);
    subset(ip,op2);
}

int main(){
    string ip;
    cin>>ip;
    string op="";
    subset(ip,op);
}