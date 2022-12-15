class Solution {
public:

    int longestCommonSubsequence(string s, string t) {
vector<vector<int>>dp(s.length()+1 , vector<int>(t.length()+1 ,0));
for(int i=1 ; i<=s.length() ; i++)
{
    for(int j=1 ; j<=t.length() ; j++)
    {
        if(s[i-1]==t[j-1])
        {
         dp[i][j]=1+dp[i-1][j-1];
        }
        else dp[i][j]=max(dp[i][j-1]  , dp[i-1][j]);
    }
}
for(auto i : dp)
{
    for(auto j : i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
return dp[s.length()][t.length()];  
    }
};