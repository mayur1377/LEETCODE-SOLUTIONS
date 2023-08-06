class Solution {
public:
    const int MOD = 1e9 + 7;
    int dp[101][101];
    long helper(int count_song, int count_unique,int n,int goal, int k){
        if(count_song == goal){
            if(count_unique == n)   return dp[count_song][count_unique] = 1;
            return 0;
        }
        
        if(dp[count_song][count_unique] != -1)  return dp[count_song][count_unique];
        long result = 0;
        if(count_unique < n)
            result += (n - count_unique) * helper(count_song+1, count_unique+1, n, goal, k);
        if(count_song > k)
            result += (count_unique - k) * helper(count_song+1, count_unique, n, goal, k);
        return dp[count_song][count_unique] = result % MOD;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,n,goal,k);
    }
};


//fever,will,do,5omo,night4