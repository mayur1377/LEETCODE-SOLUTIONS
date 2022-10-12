class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
sort(nums.begin() , nums.end());
int ans=0;
for(int i=2 ; i<nums.size() ; i++)
{
    if(nums[i]<nums[i-1]+nums[i-2]) 
    {
        ans=max(ans , nums[i]+nums[i-1]+nums[i-2]);
    }
}
        return ans;
    }
};