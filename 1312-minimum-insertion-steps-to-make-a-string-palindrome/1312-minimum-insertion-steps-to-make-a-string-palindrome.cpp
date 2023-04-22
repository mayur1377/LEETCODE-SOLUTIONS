class Solution {
public:
    int minInsertions(string s) {
string t=s;
reverse(t.begin() , t.end());
vector<vector<int>>dp(s.length()+1,vector<int>(s.length()+1 , 0));
for(int i=1 ; i<=s.length() ; i++)
{
    for(int j=1 ; j<=s.length() ; j++)
    {
        if(s[i-1]==t[j-1])
        {
            dp[i][j]=1+dp[i-1][j-1];
        }
        else
        {
            dp[i][j]=max(dp[i][j-1] , dp[i-1][j]);
        }
    }
}
return s.length()-dp[s.length()][s.length()];
    }
};