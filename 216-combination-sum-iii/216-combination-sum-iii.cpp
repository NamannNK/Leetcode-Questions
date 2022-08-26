class Solution {
    vector<vector<int>>res;
    void solve(int i,int k,int n,vector<int>v){
        if(i==10){
            if(k==0 && n==0){
                res.push_back(v);
            }
            return;
        }
        if(k>0 && i<=n){
            v.push_back(i);
            solve(i+1,k-1,n-i,v);
            v.pop_back();
        }
        solve(i+1,k,n,v);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        solve(1,k,n,v);
        return res;
    }
};