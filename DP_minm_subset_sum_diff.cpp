#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    
	    bool t[n+1][sum+1];
	    
	    for (int i = 0; i <= n; i++)
            t[i][0] = true;
            
        for (int i = 1; i <= sum; i++)
            t[0][i] = false;
            
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j)
	                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
	            else
	                t[i][j] = t[i-1][j];
	        }
	    }
	    
	    int diff = 0;
	    
	    // Find the largest j such that dp[n][j]
        // is true where j loops from sum/2 t0 0
	    for(int j=sum/2;j>=0;j--){
	        if(t[n][j] == true){
	            diff = sum - 2*j;
	            break;
	        }
	    }
	   return diff;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
}  