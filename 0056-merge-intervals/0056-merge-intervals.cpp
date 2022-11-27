class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
vector<vector<int>>ans;
sort(nums.begin() , nums.end());
ans.push_back(nums[0]);
for(int i=1  ;i<nums.size(); i++)
{
    if(ans.back()[1]>=nums[i][0])
    {
        ans.back()[1]=max(ans.back()[1] , nums[i][1]);
    }
    else ans.push_back(nums[i]);
}
return ans;
    }
};