class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int x:nums)sum+=x;
        int s=0;
        for(int i=0;i<nums.size();i++){
            
            if(s == sum-s-nums[i])return i;
            s+= nums[i];
        }
        return -1;
    }
};