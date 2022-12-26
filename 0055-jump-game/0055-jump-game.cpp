class Solution {
public:
    bool canJump(vector<int>& nums) {
int lastpos=nums.size()-1;
for(int i=nums.size()-2 ; i>=0; i--)
{
    if(nums[i]+i>=lastpos)
    {
        lastpos=i;
    }
}
        return lastpos==0;
    }
};
//approach , just thik 