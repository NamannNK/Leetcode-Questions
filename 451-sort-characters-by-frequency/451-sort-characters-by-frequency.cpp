class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto x:s)m[x]++;
        multimap<int,char,greater<int>>mp;
        for(auto x:m)
            mp.insert({x.second,x.first});
        
        string res="";
        for(auto x:mp){
            int i = x.first;
            while(i--){
                res.push_back(x.second);
            }
        }
        return res;
    }
};