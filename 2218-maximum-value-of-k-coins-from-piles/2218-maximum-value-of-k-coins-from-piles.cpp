class Solution {
public:
int help(vector<vector<int>>&piles , int i , int k  , vector<vector<int>>&dp)
{

    if(k==0 or i<0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];    
    int notpick=help(piles , i-1 , k , dp);
    
    int pick=0;
    int temp=piles[i].size();
    int maxi=min(k , temp);
    for(int j=0 ; j<maxi ; j++)
    {
        pick+=piles[i][j];
        
        int next=help(piles , i-1 , k-j-1 , dp); 
        notpick=max(notpick, pick+next);
//         involes , pick and pick from next ,or , pick and pick from next pile
    }
    return dp[i][k]=notpick;
}
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
int n=piles.size();
vector<vector<int>>dp(n , vector<int>(k+1 , -1));
return help(piles , n-1 , k , dp);
    }
};