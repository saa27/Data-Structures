//Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs 
//whereas the other two number occur exactly once and are distinct. Find the other two numbers.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        vector<int> ans;
        // 1. find XOR of all numbers
        int xorVal = 0;
        for (auto i : nums)
        {
            xorVal = xorVal ^ i;
        }

        // 2. find RSB mask of xorVal
        int rsbMask = 0;
        rsbMask = xorVal & (-xorVal);

        // 3. if rsbMask & number = 1 we get the 1st number with rsb =1
        // if rsbMask & number = 0 we get the 2nd number with rsb =0

        int x = 0, y = 0;
        for (auto i : nums)
        {
            if ((rsbMask & i) == 0)
                x = x ^ i;
            else
                y = y ^ i;
        }
        ans.push_back(x);
        ans.push_back(y);

        sort(ans.begin(), ans.end());

        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends