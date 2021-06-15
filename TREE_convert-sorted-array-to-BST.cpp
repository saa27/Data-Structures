// ques- https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    TreeNode* constructTree(vector<int> nums,int left,int right){
        if(left>right) return NULL;
        
        int mid = left + (right-left)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = constructTree(nums,left,mid-1);
        node->right = constructTree(nums,mid+1,right);
        
        return node;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == NULL)
            return NULL;
        return constructTree(nums,0,nums.size()-1);
    }
};