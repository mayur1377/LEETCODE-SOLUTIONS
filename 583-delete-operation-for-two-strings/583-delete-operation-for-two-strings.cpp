class Solution {
public:
    int minDistance(string word1, string word2) {
int n=word1.size();
int m=word2.size();
vector<vector<int>>dp(n+2 , vector<int>(m+2 , 0));
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<m ; j++)
    {
        if(word1[i]==word2[j])
        {
            dp[i+1][j+1]=1+dp[i][j];
        }
        else dp[i+1][j+1]=max(dp[i+1][j] , dp[i][j+1]);
    }
}
return m+n-2*dp[n][m];
    }
};