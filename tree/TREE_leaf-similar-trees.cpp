#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> v1;
    vector<int> v2;

    void fun(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;

        if (root->left == NULL and root->right == NULL)
            v.push_back(root->val);

        fun(root->left, v);
        fun(root->right, v);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        v1.clear();
        v2.clear();
        fun(root1, v1);
        fun(root2, v2);

        if (v1.size() != v2.size())
            return false;

        return (v1 == v2);
    }
};
