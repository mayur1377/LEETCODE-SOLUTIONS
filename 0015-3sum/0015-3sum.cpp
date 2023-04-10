class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
sort(nums.begin() , nums.end());
set<vector<int>>s;
vector<vector<int>>ans;
int n=nums.size();
for(int i=0 ; i<n-1 ; i++)
{
    int j=i+1;
    int k=n-1;
    while(j<k)
    {
        if(nums[i]+nums[j]+nums[k]==0)
        {
            s.insert({nums[i] , nums[j],nums[k]});
            j++;
            k--;
        }
        else if(nums[i]+nums[j]+nums[k]>0)
        {
            k--;
        }
        else j++;
    }
}
for(auto i : s) ans.push_back(i);
return ans;
    }
};