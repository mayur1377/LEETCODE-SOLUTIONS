class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
int l=1; 
int r=*max_element(begin(nums),end(nums));
while(l<r)
{
    int mid = l+(r-l)/2;
    int ans=0;
    for(int i : nums)
    {
        ans+= (int)ceil((i * 1.0)/mid);
    }
    if(ans<=h)
        r=mid;
    else 
        l=mid+1;
}
        return l;
    }
};