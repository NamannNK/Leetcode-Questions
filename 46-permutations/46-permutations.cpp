class Solution {
public:
    vector<vector<int>>res;
    void solve(int i,vector<int>nums,vector<bool>&freq,vector<int>v){
        if(v.size()==nums.size()){
            res.push_back(v);
            return;
        }
        for(int ind=0;ind<nums.size();ind++){
            if(freq[ind]==false){
                v.push_back(nums[ind]);
                freq[ind]=true;
                solve(ind+1,nums,freq,v);
                freq[ind]=false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        vector<bool>freq(nums.size(),false);
        solve(0,nums,freq,v);
        return res;
    }
};