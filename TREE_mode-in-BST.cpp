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
    unordered_map<int,int> mp;
    unordered_map<int, vector<int>> mp2;
    
    vector<int> res;
    
    void util(TreeNode* root){
        if(root == NULL)
            return;
        mp[root->val]++;
        
        util(root->left);
        util(root->right);        
    }
    
    vector<int> findMode(TreeNode* root) {
        util(root);
        int max_fr=0;
        
        for(auto i:mp){
            if(i.second>=max_fr){
                max_fr = i.second;
                mp2[max_fr].push_back(i.first);
            }            
        }
        return mp2[max_fr];
    }
};
