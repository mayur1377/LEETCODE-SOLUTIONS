class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(), arr2.end());
        unordered_map<string, int> dp; // dfs value
        function<int(int, int)> dfs = [&] (int i, int prev) {
            if (i < 0) return 0;
            string key = to_string(i) + ',' + to_string(prev);
            if (dp.count(key)) return dp[key];
            int sub = arr1[i] < prev ? dfs(i-1, arr1[i]): INT_MAX; // not to swap
            int ind = lower_bound(arr2.begin(), arr2.end(), prev) - arr2.begin() - 1;
            if (ind >= 0) { // swap
                int swap = dfs(i-1, arr2[ind]);
                if (swap != INT_MAX) swap += 1;
                sub = min(sub, swap);
            }
            dp[key] = sub;
            return sub;
        };
        int ans = dfs(arr1.size()-1, INT_MAX);
        return ans == INT_MAX ? -1: ans;
    }
};