class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
sort(intervals.begin() , intervals.end());
stack<pair<int , int>>s;
s.push({intervals[0][0] ,intervals[0][1]});
for(int i=1 ; i<intervals.size() ; i++)
{
    if(s.top().second>=intervals[i][0])
    {
        s.top().second=max(s.top().second , intervals[i][1]);
    }
    else s.push({intervals[i][0] , intervals[i][1]});
}
vector<vector<int>>ans;
while(s.size())
{
    vector<int>temp;
    int x=s.top().first;
    temp.push_back(x);
    x=s.top().second;
    temp.push_back(x);
    ans.push_back(temp);
    s.pop();
}
return ans;
    }
};