class Solution {
public:
    int solve(int m,int n,vector<vector<int>>obstacle,vector<vector<int>>&dp){
        
        
        if(m<0 || n<0)return 0 ;
        if(obstacle[m][n] == 1)return 0 ;
        if(m==0 && n==0){
            return 1;
        }
        if(dp[m][n] != -1)return dp[m][n];
        
        
        int l = solve(m-1,n,obstacle,dp);
        int r = solve(m,n-1,obstacle,dp);
        return dp[m][n] = l+r;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        //if(m==1 && n==1 && obstacleGrid)
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,obstacleGrid,dp);
    }
};