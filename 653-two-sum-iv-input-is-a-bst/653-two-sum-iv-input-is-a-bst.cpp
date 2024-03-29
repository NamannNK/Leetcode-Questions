/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* root,int k,unordered_set<int>&s){
        if(root==NULL)return false;
        if(s.find(k-root->val)!=s.end())return true;
        s.insert(root->val);
        if(dfs(root->left,k,s)==true)return true;
        if(dfs(root->right,k,s)==true)return true;
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s;
        return dfs(root,k,s);
            
    }
};