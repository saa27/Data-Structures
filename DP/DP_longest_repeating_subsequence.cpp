// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string x){
		int m = x.length();
        int n = x.length();
        
        string y =x;
        
        int l[m+1][n+1];
        int i,j;
        
        for(i = 0;i<=m;i++){
            for(j=0; j<=n;j++){
                if(i==0 || j==0)
                    l[i][j] = 0;
                else if(x[i-1] == y[j-1] && i!=j)
                    l[i][j] = l[i-1][j-1] + 1;
                else
                    l[i][j]= max(l[i][j-1],l[i-1][j]);
            }
        }
        return l[m][n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends