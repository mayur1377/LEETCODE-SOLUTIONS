class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
vector<int>ans;
for(auto j : queries)
{
    vector<pair<string , int>>q;
    for(int i=0 ;  i<nums.size() ;  i++)
    {
        q.push_back({nums[i].substr(nums[i].size()-j[1]) , i});
    }
    sort(q.begin() , q.end());
    ans.push_back(q[j[0]-1].second);
}
        return ans;
    }
};