// ques - https://leetcode.com/problems/n-ary-tree-preorder-traversal/

#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node* root) {
       vector<int> ans;
        if(root == NULL)
            return {};
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* t= st.top();
            st.pop();
            ans.push_back(t->val);
            for(int i=0;i<t->children.size();i++){
                st.push(t->children[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
