class Solution {
    bool isPal(string &s) {
        int i = 0, j = s.size() - 1;
        while(i < j) {
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    int dfs(int i, int n, string &s, vector<int> &dp) {
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];

        string t;
        int ans = 1e9;
        for(int j=i; j<n; j++) {
            t += s[j];
            if(isPal(t)) ans = min(ans, 1 + dfs(j + 1, n, s, dp));
        }
        return dp[i] = ans;
    }
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return dfs(0, n, s, dp) - 1;
    }
};