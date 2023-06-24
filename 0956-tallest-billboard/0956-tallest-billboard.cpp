class Solution {
    int sum;
public:
    int solve(int i, int tot, vector<int> &rods, vector<vector<int>> &dp)
    {
        if(i == rods.size())
        {
            if(tot == 0)
                return 0;
            return -1e8;
        }
        if(dp[i][tot + sum] != -1)
            return dp[i][tot + sum];
        return dp[i][tot + sum] = max({solve(i + 1, tot, rods, dp), rods[i] + solve(i + 1, tot + rods[i], rods, dp), solve(i + 1, tot - rods[i], rods, dp)});
    }
    
    int tallestBillboard(vector<int>& rods) {
        sum = accumulate(rods.begin(), rods.end(), 0);
        vector<vector<int>> dp(rods.size(), vector<int> (2 * sum + 1, -1));
        return solve(0, 0, rods, dp);
    }
};