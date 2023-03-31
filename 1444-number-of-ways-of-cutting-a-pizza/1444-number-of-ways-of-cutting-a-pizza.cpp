class Solution {
public:
long long MOD=1000000007;
bool check(vector<string>&pizza , int sr , int er , int sc , int ec)
{
    for(int i=sr ; i<=er ; i++)
    {
        for(int j=sc ; j<=ec ; j++)
        {
            if(pizza[i][j]=='A') return true;
        }
    }
    return false;
}

int help(vector<string>&pizza , vector<vector<vector<int>>>&dp , int sr , int sc , int k)
{
    int m=pizza.size();
    int n=pizza[0].size();
    if(k==0) return 1;
    if(dp[sr][sc][k]!=-1) return dp[sr][sc][k];
    long long int ans=0;
    for(int i=sr ; i<m-1 ; i++)
    {
        bool upper=check(pizza , sr , i , sc , n-1);
        bool lower=check(pizza , i+1 , m-1 , sc , n-1);
        if(upper and lower)
        {
            int temp=(help(pizza , dp , i+1 , sc , k-1));
            ans=(ans+temp)%MOD;
        }
    }
    
    for(int i=sc ; i<n-1 ; i++)
    {
        bool left=check(pizza , sr , m-1 , sc , i);
        bool right=check(pizza, sr , m-1 , i+1 , n-1);
        if(left and right)
        {
            int ok=help(pizza , dp , sr , i+1 , k-1);
            ans=(ans+ok)%MOD;
        }
    }
    return dp[sr][sc][k]=ans;
}
    int ways(vector<string>& pizza, int k) {
int m=pizza.size();
int n=pizza[0].size();
vector dp(m , vector(n , vector<int>(k , -1)));
int ans= help(pizza , dp , 0 , 0 , k-1);
return ans;
    }
};