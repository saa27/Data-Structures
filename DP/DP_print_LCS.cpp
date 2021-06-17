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
    string printlcs(int m, int n, string text1, string text2)
    {
        int l[m+1][n+1];
        int i,j;
        string s="";
        
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

        int x= m, y=n;
        while(x>0 && y>0){
            if(text1[x-1] == text2[y-1]){
                s.push_back(text1[x-1]);
                x--;
                y--;
            }
            else{
                if(l[x][y-1]>l[x-1][y])
                    y--;
                else
                    x--;
            }
        }
        reverse(s.begin(),s.end());
        return s;
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
        cout << ob.printlcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends