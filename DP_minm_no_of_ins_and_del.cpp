// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	
	int lcs(int m, int n, string text1, string text2)
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
    
	int minOperations(string str1, string str2) 
	{ 
	    int m = str1.length();
	    int n = str2.length();
	    
	    int lcsvalue= lcs(m,n,str1,str2);

        int insertions= m-lcsvalue;
        int deletions= n=lcsvalue;
	    
	    int total = insertions+deletions;
	    return total;
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends