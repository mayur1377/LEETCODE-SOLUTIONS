class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<vector<int>> dp(k+1, vector<int>(n+1, 0));
        for(int j = n-1; j>=0; j--){
            int left = 0, right = n;
            while(left<right){
                int mid = (left+right)/2;
                if (events[mid][0] <= events[j][1]){
                    left = mid+1;
                }else{
                    right = mid;
                }
            }
            for(int i=1; i<=k; i++){
                dp[i][j] = max(dp[i][j+1], events[j][2] + dp[i-1][left]);
            }
        }
        return dp[k][0];
    }
};