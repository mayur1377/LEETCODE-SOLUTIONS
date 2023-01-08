class Solution {
public:
    int xorBeauty(vector<int>& nums) {
int ans=0;
for(auto i : nums) ans^=i;
return ans;
    }
};