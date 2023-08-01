class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
vector<int>ans;
int i=0 , j=0;
while(i<nums.size() or j<nums.size())
{
    if(i<nums.size() and ans.size()%2==0)
    {
        while(i<nums.size() and nums[i]<0) i++;
        if(i<nums.size())ans.push_back(nums[i++]);
    }
    else if(j<nums.size() and ans.size()%2)
    {
        while(j<nums.size() and nums[j]>0) j++;
        if(j<nums.size())ans.push_back(nums[j++]);
    }
    if(nums.size()==ans.size()) break;
}
return ans;
    }
};