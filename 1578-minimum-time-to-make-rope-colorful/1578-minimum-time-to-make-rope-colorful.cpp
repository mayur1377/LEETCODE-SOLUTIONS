class Solution {
public:
    int minCost(string s, vector<int>& nums) {
int count=0;
for(int i=0; i<nums.size() ; i++)
{
    int x=i;
    vector<int>temp;
    int sum=0;
    int maxi=0;
    while(x<s.length() and s[i]==s[x])
    {
        sum+=nums[x];
        maxi=max(maxi, nums[x]);
        x++;
    }
    if(x!=i)
    {
    count+=(sum-maxi);
    }
    i=x-1;
    cout<<s[x-1];
}
        return count;
    }
};