class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
if(nums.size()==1) return nums[0];
int l=0;
int r=nums.size()-1;
while(l<r)
{
    int m=l+(r-l)/2;
    int num=(m%2==0)? m+1 : m-1;
    if(nums[m]==nums[num]) l=m+1;
    else r=m;
}
        return nums[l];
    }
};