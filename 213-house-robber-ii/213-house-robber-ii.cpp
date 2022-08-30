class Solution {
public:
    int robber(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        vector<int>v1,v2;
        if(nums.size()==1)return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                v1.push_back(nums[i]);
            }
            if(i!= nums.size()-1)
                v2.push_back(nums[i]);
        }
        return max(robber(v1),robber(v2));
    }
};