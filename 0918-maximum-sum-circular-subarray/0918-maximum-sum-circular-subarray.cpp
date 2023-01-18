class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
int sum=0;
int minsum=nums[0];
int maxsum=nums[0];
int currmax=0;
int currmin=0;
for(auto i : nums)
{
    sum+=i;
    currmax=max(i , currmax+i);
    maxsum=max(maxsum , currmax);
    currmin=min(i , currmin+i);
    minsum=min(minsum , currmin);
}
if(maxsum<0) return maxsum;
return max(maxsum ,sum-minsum);
    }
};