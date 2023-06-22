class Solution {
public:
// 1 = buy,  0 =sell;
int help(vector<int>&nums , int fee , int i , int buy , vector<vector<int>>&dp)
{
    if(i==nums.size()) return 0;
    if(dp[i][buy]!=INT_MAX) return dp[i][buy];
    int ans=0;
    if(buy)
    {
        ans=max(help(nums , fee , i+1 , 0 , dp)-nums[i] , help(nums , fee , i+1 , 1 , dp));
    }
    else
    {
        ans=max(help(nums , fee , i+1 , 0 , dp) , help(nums  , fee ,  i+1 , 1 , dp)+nums[i]-fee );
    }
    return dp[i][buy]=ans;
}
    int maxProfit(vector<int>& prices, int fee) {
vector<vector<int>>dp(prices.size()+1 , vector<int>(2 , INT_MAX));    
return help(prices , fee , 0 , 1 , dp);
    }
};