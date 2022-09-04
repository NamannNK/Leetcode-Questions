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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        if(root==NULL)return {};
        q.push({root,0});
        map<int,vector<int>>m;
        while(q.empty() == false){
            int n=q.size();
            map<int,vector<int>>mt;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                int col=q.front().second;
                q.pop();
                mt[col].push_back(temp->val);
                if(temp->left!=NULL){
                    q.push({temp->left,col-1});
                }
                if(temp->right!=NULL){
                    q.push({temp->right,col+1});
                }
            }
            for(auto x:mt){
                int i=x.first;
                vector<int>v = x.second;
                sort(v.begin(),v.end());
                for(auto y:v){
                    m[i].push_back(y);
                }
            }
        }
        vector<vector<int>>Res;
        for(auto x:m){
            Res.push_back(x.second);
        }
        return Res;
    }
};