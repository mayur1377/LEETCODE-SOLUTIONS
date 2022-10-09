class Solution {
public:
int mod = 1000000007;
int help(vector<vector<int>>& grid , int i , int j , int k , int sum , vector<vector<vector<int>>>&dp)
{
    if(i<0 or j<0 )  return 0;
    if(i==0 and j==0) return (sum+grid[0][0])%k==0;
    if(dp[i][j][sum%k]!=INT_MAX) return dp[i][j][sum%k];
    return dp[i][j][sum%k]=(help(grid , i-1 , j , k , sum+grid[i][j], dp)%mod + help(grid , i , j-1 ,k, sum+grid[i][j] , dp)%mod)%mod;
}
    int numberOfPaths(vector<vector<int>>& grid, int k) {
vector<vector<vector<int>>>dp(grid.size()+1, vector<vector<int>>(grid[0].size()+1 , vector<int>(k+100, INT_MAX)));
int ans= help(grid , grid.size()-1 , grid[0].size()-1 , k , 0 , dp)%mod;
return ans%mod;
    }
};