class Solution {
public:
int dp[201][201];
int help(vector<vector<int>>&matrix , int i , int j , int prev)
{
    if(i<0 or i>=matrix.size() or j<0 or j>=matrix[0].size()) return 0;
    if(prev>=matrix[i][j]) return 0;
    if(dp[i][j]) return dp[i][j];
    int a=help(matrix , i+1 , j , matrix[i][j]);
    int b=help(matrix , i-1 , j , matrix[i][j]);
    int c=help(matrix , i , j+1 , matrix[i][j]);
    int d=help(matrix , i , j-1 , matrix[i][j]);
    return dp[i][j]=max({a, b , c , d})+1;

}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
int ans=INT_MIN;
for(int i=0 ; i<matrix.size() ; i++)
{
    for(int j=0 ; j<matrix[0].size() ; j++)
    {
        ans=max(ans, help(matrix , i , j , -1));
    }
}
        return ans;
    }
};