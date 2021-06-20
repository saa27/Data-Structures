#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        int no = (int)log2(num);

        int temp = 1;
        while (no != 0)
        {
            temp = (temp << 1) + 1;
            no--;
        }
        int x = num ^ temp;
        return x;
    }
};