class Solution {
public:
    int search(vector<int>& nums, int target) {
int low=0;
int high=nums.size()-1;
while(low<=high)
{
    int mid=(low+high)>>1;
    if(nums[mid]==target) return mid;
    if(nums[low]<=nums[mid])
    {
//         left part is sorted
        if(nums[low]<=target and target<=nums[mid])
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    else
    {
        if(nums[mid]<=target and target<=nums[high])
        {
            low=mid+1;
        }
        else high=mid-1;
    }
}
        return -1;
    }
};