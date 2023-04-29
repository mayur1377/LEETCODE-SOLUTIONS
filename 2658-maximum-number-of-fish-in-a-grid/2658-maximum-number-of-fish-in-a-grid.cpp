class Solution {
public:
int ans=0;
int help(vector<vector<int>>&grid ,int i , int j )
{
    if(i>=grid.size() or i<0 or j>=grid[0].size() or j<0) return 0;
    if(grid[i][j]<=0) return 0;
    int temp=grid[i][j];
    grid[i][j]=-1;
    temp+=help(grid , i+1 , j );
    temp+=help(grid , i-1 , j);
    temp+=help(grid , i , j+1);
    temp+=help(grid , i , j-1);
    return temp;
}
    int findMaxFish(vector<vector<int>>& grid) {
int ans=0;
for(int i=0 ; i<grid.size() ; i++)
{
    for(int j=0 ; j<grid[0].size() ; j++)
    {
        if(grid[i][j]>0)
        {
            int curr=0;
            curr=help(grid , i  , j );
            ans=max(ans , curr);
        }
    }
}
        return ans;
    }
};