class Solution {
public:

    int maxSatisfaction(vector<int>& nums) {
sort(nums.begin() , nums.end());
vector<vector<int>>dp(nums.size()+1 , vector<int>(nums.size()+1 , 0));
for(int i=nums.size()-1 ; i>=0 ; i--)
{
    for(int j=0 ; j<=i ; j++)
    {
       dp[i][j]=max(nums[i]*(j+1)+dp[i+1][j+1] , dp[i+1][j]);
    }
}
return dp[0][0];
//turn help(nums , 0 , 1);  
    }
};