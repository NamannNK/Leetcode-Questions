class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n==0)return 1;
        if(dp[n] ==-1){
            int l=0,r=0;
            if(n>=2)
                r= solve(n-2,dp);
            if(n>=1)
                l = solve(n-1,dp);
            
            return dp[n] = l+r;
        }
        else return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};