class Solution {
public:
    vector<pair<int, int>> g[50005];
    int ans, vis[50005];
    void dfs(int u) {
        vis[u] = 1;
        for(auto v: g[u]) {
            if(!vis[v.first]) {
                ans += v.second;
                dfs(v.first);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        for(auto x: connections) {
            g[x[0]].push_back({x[1], 1});
            g[x[1]].push_back({x[0], 0});
        }
        ans = 0;
        dfs(0);
        return ans;
    }
};