class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>m;
        for(int x:nums2){
            while(st.size()>0 && st.top()<=x){
                m[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }
        vector<int>res;
        for(int x:nums1){
            if(m.find(x) != m.end())
            res.push_back(m[x]);
            else
                res.push_back(-1);
        }
        return res;
    }
};