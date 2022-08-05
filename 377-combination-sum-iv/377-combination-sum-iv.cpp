class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
vector<uint>dp(target+1 );
dp[0]=1;
for(int i=1 ; i<=target ; i++)
{
    for(auto j : nums)
    {
        if(j<=i)
        {
            dp[i]+=dp[i-j];
        }
    }
}
        return dp[target];
    }
};