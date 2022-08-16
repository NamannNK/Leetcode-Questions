bool mycmp(const string &s1,const string &s2){
    return s1.length()>s2.length();
}
class Solution {
public:
    string frequencySort(string s) {
        vector<string>v(256,"");
        for(auto x:s)
            v[x-'0']+= x;
        sort(v.begin(),v.end(),mycmp);
        int i=0;
        string res="";
        for(auto str: v){
            res+= str;
        }
        return res;
    }
};