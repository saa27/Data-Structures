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
    int util(TreeNode* root,int sum){
        if(root == NULL) //base condition
            return 0;
        
        sum = (sum<<1) + root->val; //if root = 1 then 1<<1 => 10 and then 10+1;
        
        if(root->left == NULL && root->right == NULL)
            return sum;
        
        return util(root->left,sum) + util(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        return util(root,0);
    }
};