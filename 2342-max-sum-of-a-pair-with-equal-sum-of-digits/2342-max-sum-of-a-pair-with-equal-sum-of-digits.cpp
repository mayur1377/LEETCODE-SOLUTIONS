class Solution {
public:
    int maximumSum(vector<int>& nums) {
vector<pair<int , int>>ok;
for(auto i : nums)
{
    int x=i;
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    ok.push_back({i , sum});
}
unordered_map<int , vector<int>>m;
for(auto i : ok)
{
    m[i.second].push_back(i.first);
}
int ans=INT_MIN;
for(auto i : m)
{
    vector<int>temp=i.second;
    if(temp.size()>=2)
    {
    sort(temp.begin() , temp.end() , greater<>());
    ans=max(ans , temp[0]+temp[1]);
    }
}
if(ans!=INT_MIN) return ans;
return -1;
    }
};