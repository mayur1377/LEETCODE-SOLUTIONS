class Solution {
public:
int dp[1000][1000] = {} ,  mod = 1000000007;
int  dfs(vector<vector<int>>&g , int i , int j , int prev)
{
    if(i<0 or i>=g.size()  or j>=g[0].size() or g[i][j]<=prev) return 0;
    if(dp[i][j]!=0) return dp[i][j];
    return dp[i][j]=(1+dfs(g , i+1 , j , g[i][j]) + dfs(g , i-1 , j , g[i][j]) +dfs(g ,  i , j+1 , g[i][j]) + dfs(g ,  i , j-1 , g[i][j]))%mod;
}
    int countPaths(vector<vector<int>>& g) {
int ans=0,  m=g.size() ,  n=g[0].size();
for(int i=0 ; i<m ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
        ans=(ans+dfs(g ,  i , j , -1))%mod;
    }
}
        return ans;
    }
};