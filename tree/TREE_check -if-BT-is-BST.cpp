#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 // } Driver Code Ends


class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool BSTutil(Node* root, int minm, int maxm){
        if(root == NULL)
            return true;
        
        if(root->data > minm && root->data < maxm
            && BSTutil(root->left,minm,root->data)
            && BSTutil(root->right,root->data,maxm))
        {
            return true; 
        }
        else
            return false;
    }
    
    bool isBST(Node* root) 
    {
        return BSTutil(root,INT_MIN,INT_MAX);
    }
};