class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-min>k){
                cout<<nums[i];
                res++;
                min = nums[i];
            }
        }
        return res;
    }
};