// tabulization method

class Solution {
public:
    bool subsetSum(vector<int> a, int sum){
        int n = a.size();
    
    bool t[n+1][sum+1];
    int i,j;
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0)
            t[i][j] = false;
            if(j==0)
            t[i][j] = true;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]<=j)
            t[i][j] = t[i-1][j-a[i-1]] || t[i-1][j];
            else
            t[i][j] = t[i-1][j];
        }
    }
    return t[n][sum];
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int i;
        for(i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        if(sum%2 != 0)
            return false;
        else{
            return subsetSum(nums, sum/2);
        }
        
    }
};

// recursion method

class Solution{
public:

    int solve(int n, int arr[], int sum){
        if(sum == 0)
            return 1;
        if(n == 0)
            return 0;
        
        if(arr[n-1]<=sum)
            return solve(n-1,arr,sum-arr[n-1]) || solve(n-1,arr,sum);
        else
            return solve(n-1,arr,sum);
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum % 2 == 0)
            return solve(N,arr,sum/2);
        else
            return 0; 
    }
};