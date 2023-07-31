class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
vector<vector<int>>ans;
vector<int>temp=nums;
ans.push_back(nums);
next_permutation(temp.begin() , temp.end());
while(nums!=temp) 
{
    ans.push_back(temp);
    next_permutation(temp.begin() , temp.end());
}
sort(ans.begin(),ans.end());
return ans;
    }
};