#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)  
{  
    return (a > b)? a : b;  
}

int lcs(string x, string y, int a, int b){
    int l[a+1][b+1];
    int i,j;
    for(i=0;i<=a;i++){
        for(j =0;j<=b;j++){
            if(i==0 || j==0)
                l[i][j] = 0;
            else if(x[i-1] == y[j-1])
                l[i][j] = l[i-1][j-1] + 1;
            else
                l[i][j] = max(l[i-1][j],l[i][j-1]);
        }
    }
    return l[a][b];
}

int main(){
    string x="AGGTAB",y="GXTXAYB";
    int a = x.length();
    int b = y.length();
    
    cout<<lcs(x,y,a,b);
}