class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hashset;
        for(int key: nums){
            if(hashset.count(key) > 0)
                return true;
            hashset.insert(key);
        }
        return false;
    }
};