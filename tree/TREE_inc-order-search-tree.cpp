//ques- https://leetcode.com/problems/increasing-order-search-tree/

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
    TreeNode* dummy = new TreeNode(); // to keep pointing at the head
    TreeNode* temp = dummy; // to move along the new tree
    
    void inorder(TreeNode* &root){
        if(root == NULL)
            return;
        
        inorder(root->left);
        
        TreeNode* node = new TreeNode(root->val);
        temp->right = node; // to add the value to the right of nodes
        temp = temp->right; // to move the pointer to the right child now
        
        inorder(root->right);
        
        return;
        
    }
    TreeNode* increasingBST(TreeNode* root) {
               
        inorder(root);
        
        return dummy->right;
    }
};

