#include <iostream>

using namespace std;
int countSubset(int arr[], int n, int s1) 
	{ 
	    int sum=0;
	    
	    int t[n+1][s1+1];
	    
	    for (int i = 0; i <= n; i++)
            t[i][0] = 1;
            
        for (int i = 1; i <= s1; i++)
            t[0][i] = 0;
            
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=s1;j++){
	            if(arr[i-1]<=j)
	                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
	            else
	                t[i][j] = t[i-1][j];
	        }
	    }
	    
	   return t[n][s1];
	}

int main()
{
    int n;
    cin>>n;
    
    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int diff;
    cin>>diff;
    
    int sum=0;
    for(int i=0;i<n;i++){
	   sum+=arr[i];
	}
	
	// s1+s2 = sum
	// s1-s2 = diff
	// 2s1 = sum+diff
	// s1 = sum+diff/2
	
	int s1 = (diff+sum)/2;
    
    cout<<countSubset(arr,n,s1);// count of subsets with given sum

    return 0;
}