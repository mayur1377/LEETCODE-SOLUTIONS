class Solution {
public:
    int numSquares(int n) {
 vector<int>dp(n+1 , INT_MAX);
dp[0]=0;
int count=1;
while(pow(count , 2)<=n)
{
    int s=pow(count , 2);
    for(int i=s ; i<=n ; i++)
    {
        dp[i]=min(dp[i-s]+1 , dp[i]);   
    }
    count++;
}
        return dp[n];
    }
};