// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum number of cuts.
    vector<vector<int>> t;
    
    int change(vector<int> &v, int amt, int n){
        if(amt == 0)
            return 0;
        if(n == 0)
            return INT_MIN;
        if(t[n][amt]!=-1)
            return t[n][amt];
        if(v[n-1]<=amt)
            return t[n][amt] = max(change(v,amt-v[n-1],n)+1,
                                   change(v,amt,n-1));
        else
            return t[n][amt] = change(v,amt,n-1);
    }
    int maximizeTheCuts(int rod, int x, int y, int z)
    {
        vector<int> v{x,y,z};
        
        int n = v.size();
        t.clear();
        t.resize(n+1,vector<int> (rod+1,-1));
        int ans = change(v,rod,n);
        
        if(ans <= 0)
            return 0;
        else 
            return ans;
    }
};

// { Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  // } Driver Code Ends