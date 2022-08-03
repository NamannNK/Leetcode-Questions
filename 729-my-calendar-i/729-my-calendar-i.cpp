class MyCalendar {
public:
     map<int,int>mp;
    MyCalendar() {
      // map<int,int>mp; 
    }
    
    bool book(int start, int end) {
        auto itr = mp.upper_bound(start);
        if(itr == mp.end() || end<= itr->second) {
            mp[end]=start;
            return true;
        } 
        else  return false;
    }
};
// /
//  * Your MyCalendar object will be instantiated and called as such:
//  * MyCalendar* obj = new MyCalendar();
//  * bool param_1 = obj->book(start,end);
//  */