class Solution {
public:
    vector<int> countBits(int n) {
vector<int>dp(n+1 , 0);
int off=1;
for(int i=1 ; i<=n ; i++)
{
    if(off*2==i) off=i;
    dp[i]=1+dp[i-off];
}
return dp;
    }
};