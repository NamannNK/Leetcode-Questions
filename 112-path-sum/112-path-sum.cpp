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
    void path(TreeNode* root,int targetsum,bool &check){
        if(root == NULL)
            return;
        if(targetsum - root->val == 0 && root->left== NULL && root->right == NULL){
            check = true;
            return;
        }
        path(root->left,targetsum-root->val,check);
        path(root->right,targetsum-root->val,check);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
       bool check = false;
       path(root,targetSum,check);
       return check;
    }
};