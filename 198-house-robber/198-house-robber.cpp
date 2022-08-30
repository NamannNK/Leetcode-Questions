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
       // vector<int>dp(nums.size(),-1);
        //return solve(nums.size()-1,nums,dp);
       // dp[0] = nums[0];
        int last = nums[0];
        int secondlast = 0;
        for(int i=1;i<nums.size();i++){
            int res = INT_MIN;
            if(i>1){
                res = max(res,nums[i]+secondlast);
            }
            else{
                res = max(res,nums[i]);
            }
            int news = max(res,last);
            secondlast = last;
            last = news;
        }
        return last;
    }
};