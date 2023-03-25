class Solution {
public:
 void solve(int node, vector < vector <int> > &adj, vector <bool> &vis, int &cnt) {
        vis[node] = true;
        cnt++;
        
        for(auto x: adj[node])
            if(!vis[x])
                solve(x, adj, vis, cnt);
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector <int> v;
        vector < vector <int> > adj(n);
        vector <bool> vis(n, false);
        int siz = edges.size(), cnt;
        
        for(int i = 0; i < siz; i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                cnt = 0;
                solve(i, adj, vis, cnt);
                v.push_back(cnt);
            }
        }
        
        long long int ans = 0;
        int N = v.size();
        
        for(int i = 0; i < N; i++)
            ans += 1ll * v[i] * (n - v[i]);
        
        return ans / (2ll);
    }
};