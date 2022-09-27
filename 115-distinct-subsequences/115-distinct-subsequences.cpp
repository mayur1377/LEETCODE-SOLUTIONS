class Solution {
public:
    int numDistinct(string s, string t) {
vector<vector<double>>dp(s.length()+1 , vector<double>(t.length()+1 , 0));
for(int i=0  ;i<=s.length() ; i++) dp[i][0]=1;
for(int i=1 ; i<=s.length() ; i++)
{
    for(int j=1 ; j<=t.length() ; j++)
    {
     if(s[i-1]==t[j-1])
     {
         dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
     }
      else dp[i][j]=dp[i-1][j];        
    }
}
return (int)dp[s.length()][t.length()]; 
    }
};