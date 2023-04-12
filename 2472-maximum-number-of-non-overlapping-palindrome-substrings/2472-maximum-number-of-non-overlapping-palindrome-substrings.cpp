class Solution {
public:
int dp[2001][2001];
bool ispal(string &s , int i , int j)
{
    while(i<j){
        if(s[i++]!=s[j--])return false;
    }
    return true;
}
    
int solve(int i , int j , string &s , int k)
{
    if(i>=s.size() or j>=s.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(ispal(s , i , j)){
        return dp[i][j]=max(solve(i , j+1 , s , k ) , max(solve(i+1 , j+1 , s , k ) , solve(j+1 , j+k ,  s , k  )+1));
    }
    return dp[i][j]=max(solve(i+1 ,j+1 , s , k ) , solve(i , j+1 , s , k  ));
}
    int maxPalindromes(string s, int k) {
memset(dp,-1,sizeof(dp));
if(k==1) return s.size();
return solve(0 , k-1 , s , k );
    }
};