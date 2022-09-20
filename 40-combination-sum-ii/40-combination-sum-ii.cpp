class Solution {
public:
    vector<vector<int>>res;
    //set<vector<int>>s;
    void solve(int i,vector<int>candidates,int target,vector<int>v){
        if(i==candidates.size()){
            if(target==0){
                res.push_back(v);
            }
            return;
        }
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],v);
            v.pop_back();
        }
        while(i+1< candidates.size() && candidates[i] == candidates[i+1])i++;
        solve(i+1,candidates,target,v);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target,v);
        // for(auto x:s){
        //     res.push_back(x);
        // }
        return res;
    }
};