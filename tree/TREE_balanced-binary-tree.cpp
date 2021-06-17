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
    int heightDiff(TreeNode* root){
        if(root == NULL)
            return 0;
        int leftHeight = heightDiff(root->left);
        int rightHeight = heightDiff(root->right);
        
        if(abs(leftHeight-rightHeight) > 1)
            flag = false;
        
        return max(leftHeight,rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        flag = true;
        heightDiff(root);
        return flag;
        
    }
};