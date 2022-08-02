class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
vector<int>ans;
for(auto i : matrix)
{
    for(auto j : i)
    {
        ans.push_back(j);
    }
}
sort(ans.begin() , ans.end());
return ans[k-1];
    }
};