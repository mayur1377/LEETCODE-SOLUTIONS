class Solution {
public:
    int minCost(string s, vector<int>& nums) {
int count=0;
for(int i=0; i<nums.size() ; i++)
{
    int x=i;
    vector<int>temp;
    while(x<s.length() and s[i]==s[x])
    {
        temp.push_back(nums[x]);
        x++;
    }
    if(temp.size()!=1)
    {
    int mini=*max_element(temp.begin() , temp.end());
    int sum=accumulate(temp.begin() , temp.end() ,0);
    count+=(sum-mini);
    }
    i=x-1;
    cout<<s[x-1];
}
        return count;
    }
};