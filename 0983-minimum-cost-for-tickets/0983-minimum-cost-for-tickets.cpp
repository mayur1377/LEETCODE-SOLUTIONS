class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
vector<int>dp(366 , 0);
for(int i=days.size()-1 ; i>=0 ; i--)
{
    int a=INT_MAX  ,b=INT_MAX , c=INT_MAX;
    a=costs[0]+dp[i+1];
    int temp=i;
    int oneweek=days[temp]+6;
    while(temp<days.size() and days[temp]<=oneweek) temp++;
    b=costs[1]+dp[temp];
    temp=i;
    int onemonth=days[temp]+29;
    while(temp<days.size() and days[temp]<=onemonth) temp++;
    c=costs[2]+dp[temp];
    dp[i]=min(a , min(b , c));    
}      
return dp[0];
    }
};