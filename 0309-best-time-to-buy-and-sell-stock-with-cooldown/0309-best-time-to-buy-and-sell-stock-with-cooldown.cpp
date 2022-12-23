class Solution {
public:

    int maxProfit(vector<int>& prices) {
vector<vector<int>>dp(prices.size()+2 , vector<int>(2 , 0));
for(int i=prices.size()-1; i>=0 ; i--)
{
    for(int j=0 ; j<=1 ; j++)
    {
    if(j==1)
    {               //buy this  and go sell   //buy ahead
       dp[i][j]=max(-prices[i]+dp[i+1][0] , dp[i+1][1] );
    }
    else 
    {                //sel and go to buy next day with one day cool down
        dp[i][0]=max(prices[i]+dp[i+2][1]  , dp[i+1][0] );
    }                                           //gonna sell next day
    }
}
return dp[0][1];
    }
};