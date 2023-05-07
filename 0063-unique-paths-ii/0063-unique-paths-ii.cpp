class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
int m=obstacleGrid.size();
int n=obstacleGrid[0].size();
// cout<<m<<" "<<n;
vector<vector<int>>dp( m+1 , vector<int>(n+1 , 0));
dp[0][0]=1;
for(int i=0 ; i<m ; i++)
{
    for(int j=0 ;j<n ;j++)
    {
        if(obstacleGrid[i][j]==1)
        {
            dp[i][j]=0;
        }
        else 
        {
            if(i-1>=0) dp[i][j]+=dp[i-1][j];
            if(j-1>=0) dp[i][j]+=dp[i][j-1];
        }
    }
}
return dp[m-1][n-1];
    }
};