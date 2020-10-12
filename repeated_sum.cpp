#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n;
    d = n;
    int sum = 0;

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum = sum + n % 10;
        n = n / 10;
    }

    cout << sum;
    return 0;
}