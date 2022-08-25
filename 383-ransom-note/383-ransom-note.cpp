class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto x:magazine)m[x]++;
        for(auto x:ransomNote){
            if(m.find(x) == m.end())return 0;
            if(m[x]>1)
            m[x]--;
            else
                m.erase(x);
        }
        return 1;
    }
};