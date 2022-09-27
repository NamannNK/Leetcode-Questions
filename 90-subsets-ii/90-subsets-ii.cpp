class Solution {
public:
    vector<vector<int>>Res;
    void solve(int i,vector<int>nums,vector<int>v){
        if(i==nums.size()){
            Res.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(i+1,nums,v);
        v.pop_back();
        while(i+1< nums.size() &&nums[i+1]==nums[i])i++;
        solve(i+1,nums,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        
        solve(0,nums,v);
        return Res;
    }
};