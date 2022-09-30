class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        // long long res=0;
        // int i=0;
        // long long sum=0;
        // for(int j=0;j<nums.size();j++){
        //     sum+= nums[i];
        //     while(j>=i && sum*(j-i+1)%1000000007<k){
        //         res++;
        //         sum-= nums[i];
        //         i--;
        //     }
        // }
        //return res;
        int n = nums.size(); 
         
       // long long tot = n * (n + 1) / 2; 
         
        long long ans = 0; 
     
        int start = 0 , end = 0; 
         
        long long sum = 0; 
        // @ccfsoltion2
        while (end < n){ 
             
            sum += nums[end]; 
             
            while (sum * (end-start+1) >= k){ //@ccfsoltion2
                sum -= nums[start]; 
                start++; 
                //ans++;
            } 
             
            ans = (ans + end-start+1); 
            end++;// @ccfsoltion2
        } 
        return ans; 
    }
};