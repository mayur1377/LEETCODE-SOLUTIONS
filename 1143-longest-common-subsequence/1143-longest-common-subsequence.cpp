class Solution {
public:
int help(string s , string t , int i , int j  , vector<vector<int>>&dp)
{
    if(i==0 or j==0) return 0;
    if(dp[i][j]!=-1) return dp[i-1][j-1];
    if(s[i-1]==t[j-1])
    {
        return dp[i][j]=1+help(s , t , i-1 , j-1 , dp);
    }
    else return dp[i][j]=max(help(s , t , i-1 , j , dp) , max(help(s , t , i-1 , j , dp) , help(s , t ,i-1 , j-1  , dp)));
}
    int longestCommonSubsequence(string text1, string text2) {
vector<vector<int>>dp(text1.length()+1 , vector<int>(text2.length()+1 , 0));
for(int i=1 ; i<text1.length()+1 ; i++)
{
    for(int j=1 ; j<text2.length()+1; j++)
    {
    if(text1[i-1]==text2[j-1])
    {
         dp[i][j]=1+dp[i-1][j-1];
    }
    else dp[i][j]=max(dp[i-1][j] , max(dp[i][j-1] , dp[i-1][j-1]));    
    }
}
return dp[text1.length()][text2.length()];
    }
};