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
    TreeNode* helper(TreeNode* root, int val, int depth, int curr_depth) {
        if(root == NULL) {
            return root;
        }
        if(depth - 1 == curr_depth) {
            TreeNode* node1 = new TreeNode(val);
            node1 -> left = root -> left;
            root -> left = node1;
            TreeNode* node2 = new TreeNode(val);
            node2 -> right = root -> right;
            root -> right = node2;
            return root;
        }
        root -> left = helper(root -> left, val, depth, curr_depth + 1);
        root -> right = helper(root -> right, val, depth, curr_depth + 1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot -> left = root;
            return newRoot;
        }
        return helper(root, val, depth, 1);
    }
};