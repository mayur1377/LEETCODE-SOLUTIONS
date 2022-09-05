class Solution {
public:
    int longestPalindromeSubseq(string s) {
string temp=s;
reverse(temp.begin() , temp.end());
vector<vector<int>>dp(temp.size()+1 , vector<int>(temp.size()+1 , 0));
for(int i=0 ; i<temp.size() ; i++)
{
    for(int j=0 ; j<temp.size() ; j++)
    {
        if(s[i]==temp[j])
        {
            dp[i+1][j+1]=1+dp[i][j];
        }
        else dp[i+1][j+1]=max(dp[i+1][j] , dp[i][j+1]);
    }
}
        return dp[s.size()][s.size()];
    }
};