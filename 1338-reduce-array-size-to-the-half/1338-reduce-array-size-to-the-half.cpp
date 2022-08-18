class Solution {
public:
bool static cmp(pair<int , int>&a , pair<int , int>&b)
{
    return a.second<=b.second;
}
    int minSetSize(vector<int>& arr) {
sort(arr.begin() , arr.end());
unordered_map<int , int>m;
for(auto i : arr) m[i]++;
priority_queue<pair<int , int>>p;
for(auto i : m)
{
    pair<int , int>x;
    x.first=i.second;
    x.second=i.first;
    p.push(x);
}
int x=0;
int count=0;
while(x<arr.size()/2)
{
    x+=p.top().first;
    p.pop();
    count++;
}
return count;
    }
};