class Solution {
public:
    void sortColors(vector<int>& nums) {
int low=0;
int high=nums.size()-1;
int mid=0;
while(mid<=high)
{
    if(nums[mid]==0)
    {
        swap(nums[mid] , nums[low]);
        low++;
        mid++;
    }
    else if(nums[mid]==2)
    {
        swap(nums[mid] , nums[high]);
        // mid++;
        high--;
    }
    else if(nums[mid]==1) mid++;
}
    }
};