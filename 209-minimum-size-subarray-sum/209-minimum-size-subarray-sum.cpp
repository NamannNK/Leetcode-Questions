class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum=0;
        int res=INT_MAX;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(sum>=target)res = min(res,j-i+1);
            while(sum>target && i<j){
                sum-=nums[i++];
                if(sum>=target)res = min(res,j-i+1);
            }
            
        }
        if(res==INT_MAX)return 0;
        return res;
    }
};