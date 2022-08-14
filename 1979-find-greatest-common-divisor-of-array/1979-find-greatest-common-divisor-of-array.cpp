class Solution {
public:
    int gcd(int a,int b){
        if(a==0)return b;
        return gcd(b%a,a);
    }
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini = INT_MAX;
        for(int x:nums){
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        return gcd(maxi,mini);
    }
};