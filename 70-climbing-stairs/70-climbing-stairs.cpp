class Solution {
    //vector<int>dp(n+1,-1);
public:
    int solve(int n,vector<int>&dp){
        if(n==0){
            return 1;
        }
        if(dp[n] == -1){
        int left =0,right=0;
        if(n>=2){
            left = solve(n-2,dp);
        }
        if(n>=1){
            right = solve(n-1,dp);
        }
        return dp[n] = left+right;
        }
        else{
            return dp[n];
        }
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};