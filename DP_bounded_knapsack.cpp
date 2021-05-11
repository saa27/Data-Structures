
// solution for 0-1 Knapsack problem
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
	int i, j;
	int t[n + 1][W + 1];

	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= W; j++)
		{
			if (i == 0 || j == 0)
				t[i][j] = 0;
			else if (wt[i - 1] <= j)
				t[i][j] = max(val[i - 1] +t[i][j - wt[i - 1]], t[i - 1][j]);
			else
				t[i][j] = t[i - 1][j];
		}
	}
	return t[n][W];
}

int main()
{
    int W;
    cin>>W;
    int n;
    cin>>n;

    int val[n];
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    cout<<knapSack(W,wt,val,n);
	
	return 0;
}
