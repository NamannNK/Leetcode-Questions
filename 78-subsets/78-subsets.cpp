class Solution {
public:
    void solve(int i,vector<int>nums,vector<vector<int>>&res,vector<int>&v){
        if(i==nums.size()){
            res.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(i+1,nums,res,v);
        v.pop_back();
        solve(i+1,nums,res,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>v;
        solve(0,nums,res,v);
        return res;
    }
};