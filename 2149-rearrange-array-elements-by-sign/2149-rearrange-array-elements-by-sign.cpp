class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(auto x:nums){
            if(x<0)neg.push_back(x);
            else pos.push_back(x);
        }
        int posi=0,negi=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || i%2==0)nums[i]=pos[posi++];
            else{
                nums[i] = neg[negi++];
            }
        }
        return nums;
    }
};