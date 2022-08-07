class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        
        for(int x:nums1){
            for(int i=0;i<nums2.size();i++){
                if(nums2[i]==x && i==nums2.size()-1)res.push_back(-1);
                else if(nums2[i]==x)
                for(int j=i+1;j<nums2.size();j++){
                    if(nums2[j]>nums2[i]){res.push_back(nums2[j]);break;}
                    if(j==nums2.size()-1)res.push_back(-1);
                }
                
            }
        }
        return res;
    }
};