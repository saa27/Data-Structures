#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int sum, int n, int t[100][100]){
    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;
        
    if(t[n][sum] != -1)
        return t[n][sum];
        
    if(arr[n-1]<=sum)
        return t[n][sum] = countSubsets(arr,sum-arr[n-1],n-1,t) + countSubsets(arr,sum,n-1,t);
    
    else if(arr[n-1]>sum)
        return t[n][sum] = countSubsets(arr,sum,n-1,t);
}

int main() {
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int arr[100];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int t[100][100];
	memset(t,-1,sizeof(t));
	int ans = countSubsets(arr,sum,n,t);
	cout<<ans;
	
	return 0;
}
