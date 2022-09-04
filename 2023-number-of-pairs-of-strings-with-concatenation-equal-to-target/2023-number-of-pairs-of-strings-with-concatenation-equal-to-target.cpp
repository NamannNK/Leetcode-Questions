class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        // sort(nums.begin(),nums.end());
        // int low=0;
        // int high=nums.size()-1;
        // while(low<high){
        //     if(nums[low]+nums[high]==target || nums[high]+nums[low]==target){
        //         low++;
        //         high--;
        //     }else if()
        // }
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target)
                    count++;
                if(nums[j]+nums[i]==target)count++;
            }
        }
        return count;
    }
};