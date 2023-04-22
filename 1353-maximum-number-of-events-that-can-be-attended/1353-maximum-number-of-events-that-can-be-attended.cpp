class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
sort(events.begin() , events.end() );
int ans=0;
int i=0;
priority_queue<int,vector<int> , greater<int>>p;
for(int d=1 ; d<=100000 ; d++)
{
    while(p.size() and d>p.top()) p.pop();
    while(i<events.size() and events[i][0]==d)
    {
        p.push(events[i][1]);
        i++;
    }
    if(!p.empty())
    {
        p.pop();
        ans++;
    }
    if(p.size()==0 and i==events.size()) break;
}
return ans;
    }
};