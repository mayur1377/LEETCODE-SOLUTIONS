class Solution {
public:
void help(vector<int>nums,vector<vector<int>>&ans ,vector<int>temp , unordered_map<int , int>m)
{
    if(temp.size()==nums.size())
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=0 ; i<nums.size() ; i++)
    {
        if(m[nums[i]]==0)
        {
            m[nums[i]]=1;
            temp.push_back(nums[i]);
            help(nums , ans , temp , m);
            temp.pop_back();
            m[nums[i]]=0;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
vector<vector<int>>ans;
unordered_map<int ,int>m;
for(auto i : nums)m[i]=0;
vector<int>temp;
help(nums, ans , temp , m);
return ans;
    }
};