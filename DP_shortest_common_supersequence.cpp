// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(int m, int n, char* text1, char* text2)
    {
        int l[m+1][n+1];
        int i,j;
        
        for(i = 0;i<=m;i++){
            for(j=0; j<=n;j++){
                if(i==0 || j==0)
                    l[i][j] = 0;
                else if(text1[i-1] == text2[j-1])
                    l[i][j] = l[i-1][j-1] + 1;
                else
                    l[i][j]= max(l[i][j-1],l[i-1][j]);
            }
        }
        return l[m][n];
    }
    
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        int lcsvalue = lcs(m,n,X,Y);
        
        int ans = (m+n) - lcsvalue;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    char X[10001], Y[10001];
    
    //taking total testcases
    cin >> t;
    while(t--){
    
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, strlen(X), strlen(Y))<< endl;
    }
	return 0;
}

  // } Driver Code Ends