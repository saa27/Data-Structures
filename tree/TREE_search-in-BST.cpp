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
    TreeNode* searchBST(TreeNode* root, int x) {
        TreeNode* curr = root;
        while(curr){
            if(curr->val == x)
                return curr;
            else if(x < curr->val)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return curr;
    }
};