class Solution {
public:
int help(vector<int>days , vector<int>costs , int i , vector<int>&dp)
{
    if(i>=days.size()) return 0;
    
    int a=INT_MAX  ,b=INT_MAX , c=INT_MAX;
    if(dp[i]!=-1) return dp[i];
    a=costs[0]+help(days , costs , i+1 , dp);
    int temp=i;
    int oneweek=days[temp]+6;
    while(temp<days.size() and days[temp]<=oneweek) temp++;
    b=costs[1]+help(days , costs , temp , dp);
    
    temp=i;
    int onemonth=days[temp]+29;
    while(temp<days.size() and days[temp]<=onemonth) temp++;
    c=costs[2]+help(days , costs , temp , dp);
    return dp[i]=min(a , min(b , c));    
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
vector<int>dp(366 , -1);
return help(days , costs , 0 , dp);
    }
};