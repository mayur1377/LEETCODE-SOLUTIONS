class Solution {
public:
vector<vector<int>>ans;
void help(vector<int>nums , vector<int>temp , int i)
{
    if(nums.size()==i)
    {
        ans.push_back(temp);
        return ;
    }
    help(nums , temp , i+1);
    temp.push_back(nums[i]);
    help(nums , temp , i+1);
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
vector<int>temp;
help(nums , temp , 0);
return ans;
    }
};