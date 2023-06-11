class Solution {
public:
    int pivotIndex(vector<int>& nums) {
int sum=0;
sum=accumulate(nums.begin() , nums.end() , 0);
int rsum=0;
for(int i=0 ; i<nums.size() ; i++)
{
    if(rsum==sum-nums[i]) return i;
    else
    {
        rsum+=nums[i];
        sum-=nums[i];
    }
}
        return -1;
    }
};