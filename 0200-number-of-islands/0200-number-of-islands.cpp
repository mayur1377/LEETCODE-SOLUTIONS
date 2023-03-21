class Solution {
public:
void help(vector<vector<char>>&grid , int i , int j , int n , int m )
{
    if(i>=grid.size() or j>=grid[0].size()) return ;
    if(grid[i][j]=='0') return;
    grid[i][j]='0';
    help( grid , i+1 , j , n , m);
    help( grid , i-1 , j , n , m);
    help( grid , i , j+1 , n , m);
    help( grid , i , j-1 , n , m);
    

}
    int numIslands(vector<vector<char>>& grid) {
int ans=0;
int n=grid.size();
int m=grid[0].size();
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<m ; j++)
    {
        if(grid[i][j]=='1')
        {
            ans++;
            help(grid , i , j , n , m );
        }
    }
}
return ans;
    }
};