class Solution {
public:
    int longestSubarray(vector<int>& nums) {
int left=0;
int right=0;
int ans=0;
unordered_map<int , int >m;
while(right!=nums.size())
{
    if(nums[right]==1)
    {
        m[1]++;
    }
    else
    {
        while(m[0])
        {
            m[nums[left]]--;
            left++;
        }
        m[0]++;
    }
    ans=max(ans , right-left);
    right++;
}
  return ans;      
    }
};