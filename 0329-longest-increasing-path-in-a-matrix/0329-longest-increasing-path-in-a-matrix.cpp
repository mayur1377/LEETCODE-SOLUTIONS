class Solution {
public:
int  dfs(vector<vector<int>>&matrix , vector<vector<int>>&dp , int i , int j , int prev)
{
    if(i<0 or i>=matrix.size() or j<0 or j>=matrix[0].size()) return 0;
    if(matrix[i][j]<=prev) return 0;
    if(dp[i][j]!=0) return dp[i][j];
    int count=1;
    int a=dfs(matrix , dp , i+1 , j , matrix[i][j]);
    int b=dfs(matrix , dp , i-1 , j , matrix[i][j]);
    int c=dfs(matrix , dp , i , j+1 , matrix[i][j]);
    int d=dfs(matrix , dp , i , j-1 , matrix[i][j]);
    count=max(count , 1+max({a , b , c , d}));
    return dp[i][j]=count;
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
vector<vector<int>>dp(matrix.size() , vector<int>(matrix[0].size() , 0));
int ans=1;
for(int i=0 ; i<matrix.size() ; i++)
{
    for(int j=0 ; j<matrix[0].size() ; j++)
    {
        if(dp[i][j]==0)
        {
            ans=max(ans , dfs(matrix , dp , i , j , -1));
        }
    }
}
        return ans;
    }
};