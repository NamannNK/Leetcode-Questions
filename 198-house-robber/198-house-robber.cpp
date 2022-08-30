class Solution {
public:
    int solve(int i,vector<int>nums,vector<int>&dp){
        if(i==0)return nums[0];
        if(i<0)return 0;
        if(dp[i] !=-1)return dp[i];
        int pick = solve(i-2,nums,dp)+nums[i];
        int notpick = solve(i-1,nums,dp);
        return dp[i] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums.size()-1,nums,dp);
    }
};