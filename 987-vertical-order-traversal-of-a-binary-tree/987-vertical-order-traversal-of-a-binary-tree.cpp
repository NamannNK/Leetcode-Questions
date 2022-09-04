class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL)
            return {};
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>>m;
        while(q.empty() == false){
            TreeNode* temp = q.front().first;
            int level = q.front().second.second;
            int vertical = q.front().second.first;
            q.pop();
            m[vertical][level].insert(temp->val);
            if(temp->left != NULL){
                q.push({temp->left,{vertical-1,level+1}});
            }
            if(temp->right != NULL){
                q.push({temp->right,{vertical+1,level+1}});
            }
        }
        vector<vector<int>>res;
        for(auto x:m){
            vector<int>v;
            for(auto y:x.second){
                for(auto s: y.second){
                    v.push_back(s);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};