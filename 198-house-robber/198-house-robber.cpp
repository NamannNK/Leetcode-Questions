class Solution {
public:
    int solve(int i,vector<int>nums,vector<int>&dp){
        if(i<0)return 0;
        if(dp[i] != -1)return dp[i];
        int res = INT_MIN;
        for(int j=2;j<=nums.size();j++){
            res = max(res,nums[i]+solve(i-j,nums,dp));
        }
        res = max(res,solve(i-1,nums,dp));
        return dp[i] = res;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size()+1,-1);
        return solve(nums.size()-1,nums,dp);
    }
};