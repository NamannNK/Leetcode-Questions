class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==1 && tokens[0]>power)return 0;
        else if(tokens.size()==1 && tokens[0]<=power)return 1;
        sort(tokens.begin(),tokens.end());
        int start = 0;
        int end = tokens.size()-1;
        int score=0;
        int res=0;
        while(start<=end){
            if(tokens[start]>power && score==0)return 0;
            if(tokens[start]<=power){
                power-= tokens[start++];
                score++;
                res=max(res,score);
            }
            else{
                if(score>0){
                    power+= tokens[end--];
                    res=max(res,score);
                    score--;
                }
                //if(score==0)return 0;
            }
        }
        return res;
    }
};