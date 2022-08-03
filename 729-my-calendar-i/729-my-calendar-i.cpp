class MyCalendar {
public:
vector<pair<int , int>>m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
for(auto i : m)
{
    if(start<i.second and end>i.first) return 0;
}
m.push_back({start , end});
return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */