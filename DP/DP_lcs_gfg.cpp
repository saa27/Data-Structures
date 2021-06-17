// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int m, int n, string text1, string text2)
    {
        int l[m+1][n+1];
        int i,j;
        
        for(i = 0;i<=m;i++){
            for(j=0; j<=n;j++){
                if(i==0 || j==0)
                    l[i][j] = 0;
                else if(text1[i-1] == text2[j-1]){
                    l[i][j] = l[i-1][j-1] + 1;
                    }
                else
                    l[i][j]= max(l[i][j-1],l[i-1][j]);
            }
        }
        return l[m][n];
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends