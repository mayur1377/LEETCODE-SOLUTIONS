class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
int high=nums.size()-1;
int low=0;
while(low<=high)
{
    int mid=(low+high)/2;
    if(mid==0) mid++;
    else if(mid==nums.size()-1) mid--;
    // cout<<"now in index "<<mid<<": "<<nums[mid]<<endl;
    if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]) return mid;
    if(nums[mid-1]<nums[mid]) low=mid+1;
    else high=mid-1;
}
        return -1;
    }
};