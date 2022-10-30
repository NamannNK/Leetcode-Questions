class Solution {
public:
    void solve(int i,int n,vector<int>&arr){
        if(i==n+1)return;
        if(i%2==0)arr[i] = arr[i/2];
        else{
            arr[i] = arr[(i-1)/2]+arr[(i+1)/2];
        }
        solve(i+1,n,arr);
    }
    int getMaximumGenerated(int n) {
        if(n==0 || n==1)return n;
        vector<int>arr(n+1);
        arr[0]=0;
        arr[1]=1;
        solve(2,n,arr);
        int res=INT_MIN;
        for(int x:arr)res=max(res,x);
        return res;
    }
};