#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int count=0;
        while(m!=n){
            m = m>>1;
            n = n>>1;
            count++;
        }
        return m<<count;
    }
};

int main()
{

    int m,n;
    cin >>m>>n;

    Solution obj;
    cout << obj.rangeBitwiseAnd(m,n) << endl;
    return 0;
}