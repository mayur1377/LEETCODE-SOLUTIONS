class Solution {
public:
int help(map<int,int>&m ,int x)
{
    int count=0;
    for(auto i : m)
    {
        count+=i.second;
        if(count>=x)
        {
            return i.first;
        }
    }
    return INT_MAX;
}
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
vector<int>ans;
map<int, int>m;
int n=nums.size();
int  j=0;
for(int i=0 ;i<n ; i++)
{
    m[nums[i]]++;
    while((i-j+1)>k)
    {
        m[nums[j]]--;
        if(m[nums[j]]==0) m.erase(nums[j]);
        j++;
    }
    if(i-j+1==k)
    {
        int temp=help( m  , x);
        if(temp==INT_MAX or temp>0) ans.push_back(0);
        else ans.push_back(temp);  
    }
}
        return ans;
    }
};