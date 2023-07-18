class Solution {
public:
int help(vector<int>&nums , int s)
{
    int count=1, sum=0;
    for(auto i : nums)
    {
        if(sum+i>s)
        {
            count+=1;
            sum=i;
        }
        else sum+=i;
    }
    return count;
}
    int shipWithinDays(vector<int>& weights, int days) {
int low=*max_element(weights.begin(),weights.end());
int high=accumulate(weights.begin() , weights.end() , 0);
while(low<=high)
{
    int mid=(low+high)/2;
    int x=help(weights , mid);
    if(x<=days)  high=mid-1;
    else low=mid+1;
}
        return low;
    }
};