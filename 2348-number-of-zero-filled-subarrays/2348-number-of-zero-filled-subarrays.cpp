class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
long long int ans=0;
long long int temp=0;
for(auto i : nums)
{
    if(i==0) temp++;
    else
    {
        long long int n=temp;
        ans+=(n*(n+1))/2;
        temp=0;
    }
}
ans+=((temp)*(temp+1))/2;
        return ans;
    }
};