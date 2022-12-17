class Solution {
public:
    int longestPalindromeSubseq(string text1) {
string text2=text1;
reverse(text2.begin() , text2.end());
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