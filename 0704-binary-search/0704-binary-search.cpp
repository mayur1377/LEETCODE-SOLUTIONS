class Solution {
public:
    int search(vector<int>& nums, int target) {
if(nums.size()==1 and nums[0]!=target) return -1;
if(nums.size()==1 and nums[0]==target) return 0;
int low=0 , high=nums.size();
while(low<=high)
{
    int mid=low+(high-low)/2;
    if(nums[mid]==target) return mid;
    if(nums[mid]<target) low=mid+1;
    else high=mid-1;
}
        return -1;
    }
};