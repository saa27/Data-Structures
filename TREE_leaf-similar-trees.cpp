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
    vector<int> v1;
    vector<int> v2;
    
    void fun1(TreeNode* root){
        if(root == NULL)
            return;
        
        if(root->left == NULL and root->right == NULL)
            v1.push_back(root->val);
        
        fun1(root->left);
        fun1(root->right);
    }
    void fun2(TreeNode* root){
        if(root == NULL)
            return;
        
        if(root->left == NULL and root->right == NULL)
            v2.push_back(root->val);
        
        fun2(root->left);
        fun2(root->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
        fun1(root1);
        fun2(root2);
        
        
        if(v1.size() != v2.size())
            return false;
        
        for(int i=0;i<v1.size();i++){
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
};