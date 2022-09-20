class Solution {
public:
    void solve(int i,vector<int>nums,int target,vector<vector<int>>&res,vector<int>v)         {
        if(target<0)return;
        if(i==nums.size()){
            if(target==0)res.push_back(v);
            return;
        }
        if(target>=nums[i]){
        v.push_back(nums[i]);
        solve(i,nums,target-nums[i],res,v);
            v.pop_back();
        }
        solve(i+1,nums,target,res,v);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>Res;
        vector<int>v;
        solve(0,candidates,target,Res,v);
        return Res;
    }
};