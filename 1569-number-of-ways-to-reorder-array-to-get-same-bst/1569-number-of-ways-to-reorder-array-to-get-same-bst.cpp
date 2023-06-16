class Solution {
public:
        int numOfWays(vector<int>& nums) 
        {
        int n = nums.size();
        vector<vector<int>> comb(n + 1, vector<int>(n + 1));
        comb[0][0] = 1;
        for (int i = 1; i <= n; ++i) 
        {
            comb[i][0] = 1;
            for (int j = 1; j <= i; ++j)
             {
                comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % 1000000007;
            }
        }
        function<int(vector<int>&)> dfs = [&](vector<int>& nums)
         {
            int n = nums.size();
            if (n <= 2) return 1;
            vector<int> left, right;
            for (int i = 1; i < n; ++i) 
            {
                if (nums[i] < nums[0]) left.push_back(nums[i]);
                else right.push_back(nums[i]);
            }
            long long res = comb[n - 1][left.size()];
            res = res * dfs(left) % 1000000007;
            res = res * dfs(right) % 1000000007;
            return (int)res;
        };
        return dfs(nums) - 1;
    }
};