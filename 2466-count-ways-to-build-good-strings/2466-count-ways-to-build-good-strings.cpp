class Solution {
public:
long long mod = 1e9 + 7; 
    long long  helper(int length,int high,vector<long long>& dp,int low,int zero,int one) {
        if(length > high) return 0;
        if(dp[length] != -1) return dp[length];
        dp[length] = length >= low ? 1 : 0;
        dp[length] += helper(length + zero,high,dp,low,zero,one) + helper(length + one,high,dp,low,zero,one);
        return dp[length] % mod; 
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<long long> dp(high + 1,-1);
        return helper(0,high,dp,low,zero,one);
    }
};