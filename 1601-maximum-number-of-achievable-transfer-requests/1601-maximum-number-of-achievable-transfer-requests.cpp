class Solution {
public:
    int ans = 0;
    void helper(int start, vector<vector<int>>& requests, vector<int>& indegree, int n, int count) {
        if (start == requests.size()) {
            for (int i = 0; i < n; i++) {
                if (indegree[i] != 0) {
                    return;
                }
            }
            ans = max(ans, count);
            return;
        }
        indegree[requests[start][0]]--;
        indegree[requests[start][1]]++;
        helper(start + 1,requests, indegree, n, count + 1);
        indegree[requests[start][0]]++;
        indegree[requests[start][1]]--;
        helper(start + 1,requests, indegree, n, count);
    }
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> indegree(n, 0);
        helper(0, requests, indegree, n, 0);
        return ans;
    }
};