class Solution {
public:
    int findDuplicate(vector<int>& nums) {
unordered_map<int , int>m;
for(auto i : nums)
{
    if(m[i]==0) m[i]++;
    else return i;
}
        return 0;
    }
};