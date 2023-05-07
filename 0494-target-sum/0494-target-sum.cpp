class Solution {
public:
int help(int i , vector<int>&nums, int k, vector<vector<int>>&dp)
{
    // if(k==0) return 1;
    if(i==nums.size()) return k==0;
    if(dp[i][k]!=1e9) return dp[i][k];
    int nottake=help(i+1 , nums , k , dp);
    int take=0;
    if(nums[i]<=k)
    {
        take=help(i+1 , nums , k-nums[i] , dp);
    }
    return dp[i][k]=take+nottake;
}
    int findTargetSumWays(vector<int>& nums, int target) {
int sum=accumulate(nums.begin() , nums.end() , 0);
// cout<<sum;
int temp=sum-target;
// cout<<temp;
if(temp<0 or temp%2) return 0;
temp/=2;
vector<vector<int>>dp(nums.size() , vector<int>(temp+1 , 1e9));
return help(0 , nums, temp  , dp);
    }
};