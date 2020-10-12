#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ans;
    cin >> s;
    int n;
    for (int i = 0, j = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] && 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            ans[j] = s[i];
            j++;
            n = j;
        }
    }
    cout << ans[n - 1 - 3];

    return 0;
}