class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        int last=2;
        int secondlast=1;
        for(int i=3;i<=n;i++){
            int x= last+secondlast;
            secondlast = last;
            last=x;
        }
        return last;
    }
};