class Solution {
public:
    vector<vector<int>>res;
    void solve(int ind,vector<int>nums){
        if(ind==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(ind+1,nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(0,nums);
        return res;
    }
};