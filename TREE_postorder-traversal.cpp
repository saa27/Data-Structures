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
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
             
        if(root == NULL)
            return {};
        
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        res.push_back(root->val);
        
        return res;
    }
};