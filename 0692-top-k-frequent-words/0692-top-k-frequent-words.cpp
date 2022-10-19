class Solution {
public:
 bool static cmp(pair<int , string> a , pair<int , string> b)
{
    if(a.first > b.first) return 1;
    if(a.first==b.first) 
    {
        if(a.second<b.second) return 1;
        return 0;
    }
    return 0;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
vector<string>ans;
unordered_map<string , int>m;
for(auto i : words) m[i]++;
vector<pair<int , string>>x;
for(auto i : m)
{
    x.push_back({i.second , i.first});
}
sort(x.begin() , x.end() , cmp);
int i=0;
while(k--)
{
    ans.push_back(x[i++].second);
}
        return ans;
    }
};