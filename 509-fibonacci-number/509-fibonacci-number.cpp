class Solution {
public:
    int fib(int n) {
vector<int>dp(n+2 , 0);
dp[0]=0;
dp[1]=1;
if(n==0 or n==1) return dp[n];
for(int i=2 ; i<=n ; i++)
{
    dp[i]=dp[i-1]+dp[i-2];
}
for(auto i:  dp) cout<<i<<" ";
        return dp[n];
    }
};