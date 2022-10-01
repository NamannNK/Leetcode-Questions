class Solution {
public:
    
    //int res=0;
    int solve(int i,string s,vector<int>&dp){
        if(i>=s.length()){
            
            return 1;
        }
        if(dp[i]!=-1)return dp[i];
        if(s[i]=='0')return 0;
        int l=0;
        if(s[i+1] != '0'){
            l=solve(i+1,s,dp);
        }
        int r=0;
        if(i+1 != s.length())
        
        if(stoi(s.substr(i,2))<=26 ){
            r = solve(i+2,s,dp);
        }
        return dp[i]=l+r;
    }
    
    int numDecodings(string s) {
        vector<int>dp(s.length()+1,-1);
        if(s[0]=='0')return 0;
        return solve(0,s,dp);
        //return res;
    }
};