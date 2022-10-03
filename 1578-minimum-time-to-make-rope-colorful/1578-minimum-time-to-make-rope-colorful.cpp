class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int gsum=0;
        int gmax=INT_MIN;
        int res=0;
        for(int i=0;i<colors.length();i++){
            if(i>0 && colors[i]!=colors[i-1]){
                res+= gsum-gmax;
                gsum=0;
                gmax=INT_MIN;
            }
            gsum+= neededTime[i];
            gmax = max(gmax,neededTime[i]);
        }
        res+= gsum-gmax;
        return res;
    }
};