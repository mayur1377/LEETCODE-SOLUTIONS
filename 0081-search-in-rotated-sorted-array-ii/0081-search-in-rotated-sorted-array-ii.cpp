class Solution {
public:
    bool search(vector<int>& nums, int target) {
int low=0;
int high=nums.size()-1;
while(low<=high)
{
    int mid=(low+high)>>1;
    if(nums[mid]==target) return 1;
    if(nums[low]==nums[mid] and nums[mid]==nums[high])
    {
        low++;
        high--;
    }
    else if(nums[mid]>=nums[low])
    {
        int temp=mid;
        if(nums[low]<=target and target<=nums[mid])
        {
            while(temp>=0 and nums[mid]==nums[temp]) temp--;
            high=temp;
            // high=mid-1;
        }
        else
        {
            while(temp<nums.size() and nums[mid]==nums[temp]) temp++;
            low=temp;
            // low=mid+1;
        }
    }
    else
    {
        int temp=mid;
        if(nums[mid]<=target and target<=nums[high])
        {
            while(temp<nums.size() and nums[mid]==nums[temp]) temp++;
            low=temp;
            // low=mid+1;
        }
        else 
        {
            while(temp>=0 and nums[mid]==nums[temp]) temp--;
            high=temp;
            // high=mid-1;
        }
    }
}
        return 0;
    }
};