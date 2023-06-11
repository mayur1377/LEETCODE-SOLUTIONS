class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
vector<int>ans;
unordered_map<int , int>m;
for(auto i : nums) m[i]++;
for(int i=1 ; i<=nums.size() ; i++)
{
    if(m[i]==0)
    {
        ans.push_back(i);
    }
}
return ans;
    }
};