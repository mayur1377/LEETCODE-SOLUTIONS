class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
int total=accumulate(nums.begin() , nums.end() , 0);
vector<int>ans;
        // (nums.size() , 0);
int left=0;
for(auto i : nums)
{
    int right=total-(left+i);    
    ans.push_back(abs(right-left));
    left+=i;
}
        return ans;
    }
};