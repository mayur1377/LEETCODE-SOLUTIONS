class Solution {
public:
    int climbStairs(int n) {
vector<int>dp(n+2 , 0);
dp[0]=0;
dp[1]=1;
if(n<=1) return n;
for(int i=2 ;i<=n+1  ;i++)
{
    dp[i]=dp[i-1]+dp[i-2];
}
        return dp[n+1];
    }
};