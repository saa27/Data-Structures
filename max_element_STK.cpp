#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    std::stack<int> st;
    int n, x;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        
        switch(q){
            case 1:
            cin>>x;
            if(st.empty())
            st.push(x);
            else
            st.push(max(x,st.top()));
            break;
            case 2:
            if(!st.empty())
            st.pop();
            break;
            case 3:
            cout<<st.top()<<"\n";
            break;
        }
    }
    

    return 0;
}

