class Solution {
public:
long long mod=1000000007;
long long dp[1050][1050];
int help(int target, vector<vector<int>>&nums , int i ,  int n)
{
    if(target<0) return 0;
    if(i>=nums.size()) return target==0;
    if(dp[i][target]!=-1) return dp[i][target]%mod;
    long long int ans=help(target , nums , i+1 , n);
    for(int x=0  ;x<nums[i][0] ; x++)
    {
        if(target-nums[i][1]*(x+1)>=0)
        {
            ans+=help(target-(x+1)*nums[i][1] , nums , i+1 , n);
        }
        else break;
    }
    return dp[i][target]=ans%mod;
    
}
    int waysToReachTarget(int target, vector<vector<int>>& types) {
memset(dp,-1,sizeof(dp));
return help(target , types , 0 , types.size())%mod;
    }
};