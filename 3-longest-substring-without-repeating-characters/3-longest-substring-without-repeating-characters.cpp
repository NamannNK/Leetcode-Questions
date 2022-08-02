class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int i=0;
        unordered_set<char>st;
        for(int j=0;j<s.size();j++){
            if(st.find(s[j]) !=st.end()){
                while(i<j && st.find(s[j])!=st.end()){
                    st.erase(s[i++]);
                }
            }
            st.insert(s[j]);
            if(st.size()>res){
               res= st.size();
                          
            }
        }
        return res;
    }
};