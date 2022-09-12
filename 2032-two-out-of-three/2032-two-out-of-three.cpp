class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        //unordered_set<int>finall;
        unordered_map<int,int>res;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        unordered_set<int>s3(nums3.begin(),nums3.end());
        for(auto x: s1){
            res[x]++;
        }
        for(auto x:s2)res[x]++;
        for(auto x:s3)res[x]++;
        vector<int>ress;
        for(auto x:res){
            if(x.second>=2)ress.push_back(x.first);
        }
        return ress;
    }
};