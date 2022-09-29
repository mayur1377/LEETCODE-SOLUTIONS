class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
vector<int>ans;
priority_queue<pair<int, int>>p;
for(auto i:arr)
{
    p.push({abs(i-x), i});
    if(p.size()>k) p.pop();
}
while(p.size())
{
    ans.push_back(p.top().second);
    p.pop();
}
sort(ans.begin() , ans.end());
return ans;
    }
};