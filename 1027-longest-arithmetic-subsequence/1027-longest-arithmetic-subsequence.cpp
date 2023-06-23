class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
  int res = 1;    
int n=nums.size();
   vector<vector<int>> dp( n+1, vector<int> ( 2001, 1 ) );
	for(int i = 1; i < n; i++ ){   
        for(int j = 0; j < i;j++ ){   
            int dif = nums[i] - nums[j] + 510;
            dp[i][dif] =max( dp[i][dif],dp[j][dif] +1);
            res= max( res, dp[i][dif] );         
        }
    }
    return res;
    }
};