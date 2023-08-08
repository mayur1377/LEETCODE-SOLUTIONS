class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
int ans=0;
int left=0;
int x=0;
for(int i=0;i<nums.size() ;i++)
{
    if(nums[i]==0)x++;
    if(x>k)
    {
        if(nums[left]==0) x--;
        left++;
    }
    if(x<=k)ans=max(ans , i-left+1);
}
        return ans;
    }
};