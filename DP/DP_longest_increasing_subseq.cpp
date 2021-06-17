#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(int m, int n, vector<int> x, vector<int> y)
    {
        int l[m + 1][n + 1];
        int i, j;

        for (i = 0; i <= m; i++)
        {
            for (j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                    l[i][j] = 0;
                else if (x[i - 1] == y[j - 1])
                    l[i][j] = l[i - 1][j - 1] + 1;
                else
                    l[i][j] = max(l[i][j - 1], l[i - 1][j]);
            }
        }
        return l[m][n];
    }

    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> nums2(nums);

        sort(nums2.begin(), nums2.end());

        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        int m = nums.size();
        int n = nums2.size();

        int lcsvalue = lcs(m, n, nums, nums2);
        return lcsvalue;
    }
};

int main()
{

    int t;
    cin >> t;

    int x;

    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    Solution obj;
    cout << obj.lengthOfLIS(v) << endl;
    return 0;
}