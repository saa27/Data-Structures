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
    int ans;
    
    void util(TreeNode* root, int l, int h){
        if(root == NULL)
            return;
        
        if(root->val>=l and root->val<=h)
            ans += root->val;
        
        // if(root->val>=l)
            util(root->left,l,h);
        
        // if(root->val<=h)
            util(root->right,l,h);
        
        return;
            
    }
    
    int rangeSumBST(TreeNode* root, int l, int h) {
        ans =0;
        
        util(root,l,h);
        
        return ans;
    }
};