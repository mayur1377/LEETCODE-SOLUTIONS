class Solution {
public:
int n;
int dp[302][302];
int help(vector<int>&temp ,int i , int j)
{
    int ans=0;
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==j)
    {
        int x=temp[i];
        if(i-1>0) x*=temp[i-1];
        if(i+1<n) x*=temp[i+1];
        return x;
    }
    for(int x=i ; x<=j ; x++)
    {
        int curr=temp[x];
        if(i-1>=0) curr*=temp[i-1];
        if(j+1<n)  curr*=temp[j+1];
        
        curr+=help(temp , i , x-1)+help(temp , x+1 , j);
        ans=max(ans , curr);
    }
    return dp[i][j]=ans;
}
    int maxCoins(vector<int>& nums) {
memset(dp, -1, sizeof(dp));
vector<int>temp;
temp.push_back(1);
for(auto i : nums) temp.push_back(i);
temp.push_back(1);
n=temp.size();
return help(temp , 1 , temp.size()-2 );
    }
};