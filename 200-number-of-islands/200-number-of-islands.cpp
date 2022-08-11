class Solution {
public:
int count=0;
void dfs(vector<vector<char>>& grid , int i , int j )
{
    if(i>=grid.size() or i<0 or j>=grid[0].size() or j<0) return ;
    if(grid[i][j]=='0' or grid[i][j]=='2') return ;
    grid[i][j]='2';
    dfs(grid , i+1 , j );
    dfs(grid , i-1 , j );
    dfs(grid , i   , j+1 );
    dfs(grid , i   , j-1 );

}
    int numIslands(vector<vector<char>>& grid) {
for(int i=0 ; i<grid.size() ; i++)
{
    for(int j=0 ; j<grid[i].size() ; j++)
    {
        if(grid[i][j]=='1')
        {
            dfs(grid , i , j );
            count++;
        }
    }
}
        return count;
    }
};