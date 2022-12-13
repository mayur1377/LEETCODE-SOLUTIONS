class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
int ans=INT_MAX;
vector<vector<int>>dp(matrix.size()+1 , vector<int>(matrix[0].size()+1 , 0));
for(int j=0 ; j<matrix[0].size() ; j++) dp[0][j]=matrix[0][j];    
for(int i=1 ; i<matrix.size() ; i++)
{
    for(int j=0 ; j<matrix[0].size() ; j++)
    {
        int up=matrix[i][j];;
        int left=matrix[i][j];
        int right=matrix[i][j];
        up+=dp[i-1][j];
        if(j-1>=0) left+=dp[i-1][j-1];
        else left+=1e5;
        if(j+1<matrix[0].size()) right+=dp[i-1][j+1];
        else right+=1e5;
        dp[i][j]=min(up , min(left , right));
    }
}
for(int j=0 ; j<matrix[0].size() ; j++)
{
    ans=min(ans , dp[matrix.size()-1][j]);
}
        return ans;
    }
};