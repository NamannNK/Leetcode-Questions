class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n= nums.size();
        long long res=(n*(n-1))/2;
        //long long x=res;
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]-i]++;
        }
        //if(m.size()==1)return 0;
        for(auto x:m){
            long long xa=(x.second);
            xa*= (x.second-1);
            xa/=2;
            res-= xa;
            //res-=x.second-1;
        }
        //if()
        return res;
    }
};