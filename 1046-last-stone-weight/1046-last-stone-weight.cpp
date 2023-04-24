class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
priority_queue<int>s;
for(auto i:stones) s.push(i);
while(s.size()!=1)
{
    int x=s.top();
    s.pop();
    int y=s.top();
    s.pop();
    s.push(abs(x-y));
}
return s.top();
    }
};