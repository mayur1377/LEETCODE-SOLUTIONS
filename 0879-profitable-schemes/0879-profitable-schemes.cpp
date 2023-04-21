class Solution {
public:
#define MOD 1000000007
int dp[101][101][101];
int help(int i , int p , int c , int n , int m, vector<int>&group , vector<int>&profit)
{
    if(i>=group.size())
    {
        return p>=m;
    }
    if(dp[i][p][c]!=-1) return dp[i][p][c];
    int nottake=help(i+1,p, c , n , m, group , profit);
    int take=0;
    if(c+group[i]<=n)
    {
        take+=help(i+1, min(p+profit[i], m) , c+group[i] ,n,  m  , group , profit);
    }
    return dp[i][p][c]=(take+nottake)%MOD;
    
}
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
memset(dp,-1 , sizeof(dp));
return help(0 , 0 , 0 ,n ,minProfit ,   group , profit );
    }
};