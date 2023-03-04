class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
long long int ans=0;
int lastmin=-1;
int lastmax=-1;
int left=-1;
for(int i=0 ; i<nums.size() ; i++)
{
    if(nums[i]>=minK and nums[i]<=maxK)
    {
        if(nums[i]==minK)
        {
            lastmin=i;
        }
        if(nums[i]==maxK)
        {
            lastmax=i;
        }
        if(min(lastmin , lastmax)-left>0) ans+=min(lastmax , lastmin)-left;
    }
    else
    {
        lastmin=-1;
        lastmax=-1;
        left=i;
    }
}
return ans;
    }
};