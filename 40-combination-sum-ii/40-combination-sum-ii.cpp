class Solution {
public:
    vector<vector<int>>res;
    void solve(int i,vector<int>candidates,int target,vector<int>&v){
        if(i==candidates.size()){
            if(target ==0){
                res.push_back(v);
            }
            return;
        }
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],v);
            v.pop_back();
        }
        while(i+1<candidates.size() && candidates[i] == candidates[i+1])i++;
        solve(i+1,candidates,target,v);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        solve(0,candidates,target,v);
        return res;
    }
};