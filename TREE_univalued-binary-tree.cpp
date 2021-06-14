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
    bool flag;
    void util(TreeNode* root, int data){
        if(root == NULL)
            return;
        
        if(root->val != data){
            flag = false;
        }
        
        util(root->right,data);
        util(root->left,data);
    }
    
    bool isUnivalTree(TreeNode* root) {
        flag = true;
        util(root,root->val);
        if(flag == false)
            return false;
        return true;
    }
};