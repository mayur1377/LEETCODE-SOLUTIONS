class Solution {
bool ispalin(string &s)
{
    int i = 0, j = s.size() - 1;
    while(i < j) {
            if(s[i++] != s[j--]) return false;
    }
    return true;
}
int help(string &s , int n , int i , vector<int>&dp)
{
    if(i==n)  return 0;
    if(dp[i]!=-1) return dp[i];
    
    string temp;
    int ans=1e9;
    for(int x=i ; x<n ; x++)
    {
        temp+=s[x];
        if(ispalin(temp)) ans=min(ans , 1+help(s , n , x+1 , dp));
    }
    return dp[i]=ans;
}
public:
    int minCut(string s) {
int n=s.size();
vector<int>dp(n , -1);
return help(s , n , 0 , dp)-1;
    }
};