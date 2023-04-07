class Solution {
public:
    
void help(vector<vector<int>>&grid , int i , int j)
{
    if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size()) return ;
    if(grid[i][j]==0) return ;
    grid[i][j]=0;
    help(grid , i+1 , j);
    help(grid , i-1 , j);
    help(grid , i , j+1);
    help(grid , i , j-1);

}
    int numEnclaves(vector<vector<int>>& grid) {
int  ans=0;
int n=grid.size();
int m=grid[0].size();
for(int i=0 ; i<n ; i++)
{
    help(grid , i , m-1);
    help(grid , i , 0  );
}

for(int j=0 ; j<m; j++)
{
    help(grid , 0 , j);
    help(grid , n-1 , j);
}
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<m ; j++)
    {
        if(grid[i][j])
        {
            // help(grid , i , j);
            ans++;
        }
    }
}
        return ans;
    }
};