class Solution {
public:
int x=1e9+7;
int help(int i , int k , int sum , vector<vector<int>>&dp)
{
    if(i==0) return sum==0;
    if(dp[i][sum]!=-1) return dp[i][sum];
    int pick=0;
    for(int j=1 ; j<=k ; j++)
    {
        if(j<=sum)
        {            
        pick+=help(i-1 , k , sum-j ,dp);
        pick=pick%x;
        }
    }
    return dp[i][sum]=pick;
}
    int numRollsToTarget(int n, int k, int target) {
vector<vector<int>>dp(n+1 , vector<int>(target+1 ,-1));
return help(n , k , target , dp);
    }
};