class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
if(cost.size()==1) return cost[0];
if(cost.size()==2) return min(cost[0] , cost[1]);
vector<int>dp(cost.size()+1 , 0);
dp[0]=cost[0];
dp[1]=cost[1];
for(int i=2 ; i<cost.size() ; i++)
{
    dp[i]=min(dp[i-1] , dp[i-2]) +cost[i];
}
        return min(dp[cost.size()-1] , dp[cost.size()-2]);
    }
};