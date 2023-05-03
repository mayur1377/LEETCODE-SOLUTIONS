class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
vector<vector<int>>ans;
unordered_map<int , int>m , n;
for(auto i : nums1) m[i]++;
vector<int>temp;
for(auto i : nums2)
{
    if(m.count(i)==0) 
    {
        temp.push_back(i);
        // m.erase(i);
        m[i]++;
    }
    n[i]++;
}
ans.push_back(temp);
temp.clear();
for(auto i : nums1)
{
    if(n.count(i)==0)
    {
        temp.push_back(i);
        n[i]++;
    }
}
ans.push_back(temp);
reverse(ans.begin(), ans.end());
return ans;
    }
};