class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int tsum=INT_MAX;
        int res = INT_MAX;
        int n = nums.size();
        int i=0;
//         for(int i=0;i<nums.size()-2;i++)
//         {
//             for(int j=i+1;j<nums.size()-1;j++)
//             {
//                 for(int k=j+1;k<nums.size();k++)
//                 {
//                     if(nums[i]+nums[j]+nums[k]==target)
//                         return target;
                   
//                       if(abs(target-(nums[i]+nums[j]+nums[k]))<=tsum)//Checking if the difference between target and the sum of the three nos is the smallest.
//                       {
//                           sum=nums[i]+nums[j]+nums[k];//To store the 3 closest sum
//                           tsum=abs(target-nums[i]-nums[j]-nums[k]);// storing how close the 3 sum is to the target
//                       }
                    
                   
//                 }
//             }
//         }
        for(i=0;i<n-2;i++){
            int start = i+1;
            int end = n-1;
            while(start<end){
                int sum = nums[i]+nums[start]+nums[end];
                if(sum == target)
                    return target;
                else if(sum>target)
                    end--;
                else 
                    start++;
                if(abs(target-sum)<=tsum){
                    //sum = nums[i]+nums[start]+nums[end];
                    res = sum;
                    tsum = abs(target - sum);
                    //start++;
                }
                
            }
        }
        return res;
    }
};