class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], result = nums[0]; 
        
        if(nums.size() == 1)
            return result;
        
        for(int i = 1; i <= nums.size() - 1; i++)
        {
            sum = max(nums[i], sum + nums[i]); 
            result = max(sum, result);
        }
        return result;
    }  
};