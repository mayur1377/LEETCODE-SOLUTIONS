class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
vector<vector<int>>common(n, vector<int>(n , 0));
vector<int>temp(n , 0);
for(auto i : roads)
{
    temp[i[0]]++;
    temp[i[1]]++;
    common[i[0]][i[1]]++;
    common[i[1]][i[0]]++;
}
int ans=0;
for(int i=0 ; i<n ; i++)
{
    for(int j=i+1 ; j<n ; j++)
    {
        ans=max(ans , temp[i]+temp[j]-common[i][j]);
    }
}
        return ans;
    }
};