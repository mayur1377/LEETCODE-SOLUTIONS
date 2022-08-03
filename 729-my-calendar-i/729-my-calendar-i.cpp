class MyCalendar {
public:
vector<pair<int , int>>ans;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
for(int i=0 ; i<ans.size() ; i++)
{
    if(!(end<=ans[i].first || start>=ans[i].second)) return 0;
}
        ans.push_back({start , end});
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */