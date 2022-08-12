class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int zero=0;
int currentmul=1;
for(auto i : nums)
{
    if(i==0) zero++;
    else currentmul=currentmul*i;
}
for(int i=0 ; i<nums.size() ; i++)
{
    if(zero==1 and nums[i]==0)
    {
        nums[i]=currentmul;
    }
    else if(zero>=1)
    {
        nums[i]=0;
    }
    else if(zero==0)
    {
        nums[i]=currentmul/nums[i];
    }
}
return nums;
    }
};