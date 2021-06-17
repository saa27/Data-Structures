#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {2, 5, 0, 7};

    int ans = INT_MAX;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        ans = min(ans, (a[i] ^ a[i + 1]));
    }
    cout<< ans;

    return 0;
}

/*
if a<=b<=c
then always a^b < a^c  OR  b^c < a^c
because 
let a = 1001
    b = 1010
    c = 1100
    a^b = 0011  b^c = 0110  a^c = 0101
*/
