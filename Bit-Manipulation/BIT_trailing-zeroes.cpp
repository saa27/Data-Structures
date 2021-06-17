#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

   int count =0;
    
    while((a&1) == 0){
        a= a>>1;
        count++;
    }
    cout<< count; 

    return 0;
}

