class Solution {
public:
    int solve(int i,int n,vector<int>&dp){
        if(i==n){
            return 1;
        }
        if(dp[i]!=-1)return dp[i];
        int l = solve(i+1,n,dp);
        int r=0;
        if(i+2<=n)
            r= solve(i+2,n,dp);
        return dp[i] = l +r;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(0,n,dp);
    }
};