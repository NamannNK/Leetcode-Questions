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
    void dfs(TreeNode* root,int maxsofar,int &count){
        if(root == NULL)return;
        //if(m.size() ==0 || root->val>=m.rbegin()->first)count++;
        //m[root->val]++;
        if(root->val>=maxsofar){count++;
                                maxsofar=root->val;}
        dfs(root->left,maxsofar,count);
        dfs(root->right,maxsofar,count);
        // if(m[root->val] ==1)m.erase(root->val);
        // else m[root->val]--;
    }
    int goodNodes(TreeNode* root) {
       int maxsofar=INT_MIN;
        int count=0;
        //map<int,int>m;
        dfs(root,maxsofar,count);
        return count;
    }
};