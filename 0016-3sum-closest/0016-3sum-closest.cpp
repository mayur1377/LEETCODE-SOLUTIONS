class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
int ans=nums[0]+nums[1]+nums[nums.size()-1];
sort(nums.begin() , nums.end());
for(int i=0  ; i<nums.size()-1 ; i++)
{
    int j=i+1;
    int k=nums.size()-1;
    while(j<k)
    {
        int sum=nums[i]+nums[j]+nums[k];
        if(sum>target) k--;
        else j++;
        if(abs(sum-target)<abs(ans-target)) ans=sum;
    }
}
        return ans;
    }
};