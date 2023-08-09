class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
sort(nums.begin(),nums.end());
int ans=0;
int low=0;
int high=nums[nums.size()-1]-nums[0];
while(low<high)
{
    int mid=(low+high)/2;
    int k=0;
    for(int i=1;i<nums.size() and k<p;i++)
    {
        int x=nums[i]-nums[i-1];
        if(x<=mid)
        {
            k++;
            i++;
        }
    }
    if(k>=p)//many pairs are there with diff,
        high=mid;
    else low=mid+1;
}
        return low;
    }
};