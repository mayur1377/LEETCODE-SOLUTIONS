class Solution {
public:
int dp[1001][1001];
#define MOD 1000000007
int help(vector<vector<int>>&matrix , int i , int j , int prev)
{
    if(i<0 or i>=matrix.size() or j<0 or j>=matrix[0].size()) return 0;
    if(prev>=matrix[i][j]) return 0;
    if(dp[i][j]) return dp[i][j];
    long long int a=help(matrix , i+1 , j , matrix[i][j]);
    long long int b=help(matrix , i-1 , j , matrix[i][j]);
    long long int c=help(matrix , i , j+1 , matrix[i][j]);
    long long int d=help(matrix , i , j-1 , matrix[i][j]);
    return dp[i][j]=(a+ b + c +d+1)%MOD;
}
    int countPaths(vector<vector<int>>& matrix) {
long long int ans=0;
for(int i=0 ; i<matrix.size() ; i++)
{
    for(int j=0 ; j<matrix[0].size() ; j++)
    {
        ans=ans+help(matrix , i , j , 0);
        ans%=MOD;
    }
}
        return ans;
// for(auto i : m) sum+=i.second;
// return sum;
    }
};