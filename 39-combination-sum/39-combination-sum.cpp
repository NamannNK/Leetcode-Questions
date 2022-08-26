class Solution {
    vector<vector<int>>res;
public:
    void solve(int i,vector<int>candidates,int target,vector<int>v){
        if(i == candidates.size()){
            if(target==0){
                res.push_back(v);
            }
            return;
        }
        if(target>=candidates[i]){
            v.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],v);
            v.pop_back();
        }
        solve(i+1,candidates,target,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        solve(0,candidates,target,v);
        return res;
    }
};