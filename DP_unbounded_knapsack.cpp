#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n) { 
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
            else if(wt[i-1]<=j)
                t[i][j] = max(val[i-1]+t[i][j-wt[i-1]], t[i-1][j]);
            else
                t[i][j] = t[i-1][j];
        }
    }
    
    return t[n][W]; 
    }

int main(){
    int W;
    cin>>W;
    int n;
    cin>>n;

    int val[n];
    int wt[n];
    cout<<"Enter the weights \n";
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter the costs \n";
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    cout<<knapsack(W,wt,val,n);
}
