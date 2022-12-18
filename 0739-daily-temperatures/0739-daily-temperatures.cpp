class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
stack<int>s;
vector<int>ans(temperatures.size() , 0);
for(int i=0 ; i<temperatures.size() ; i++)
{
    while(s.size() and temperatures[s.top()]<temperatures[i])
    {
        ans[s.top()]=i-s.top();
        s.pop();
    }
    s.push(i);
}
        return ans;
    }
};