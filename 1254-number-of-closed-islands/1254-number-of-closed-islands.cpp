class Solution {
public:
int help(vector<vector<int>>&grid, int i , int j)
{
    if(i<0 or i>=grid.size() or j<0 or j>=grid[i].size())return 0;
    if(grid[i][j]==1) return 1;
    grid[i][j]=1;
    int a1=help(grid , i+1  ,j);
    int a2=help(grid , i-1  ,j);
    int a3=help(grid , i  ,j+1);
    int a4=help(grid , i  ,j-1);
    return a1 and a2 and a3 and a4;

    
}
    int closedIsland(vector<vector<int>>& grid) {
int ans=0;
for(int i=0 ; i<grid.size() ; i++)
{
    for(int j=0 ; j<grid[0].size() ; j++)
    {
        if(grid[i][j]==0)
        {
            if(help(grid , i , j ))
            {
                ans+=1;
            }
        }
    }
}
        return ans;
        
    }
    
};