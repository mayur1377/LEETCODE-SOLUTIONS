class Solution {
public:
void dfs(vector<vector<char>>&board , int i , int j)
{
    if(i<0 or i>=board.size() or j<0 or j>=board[0].size()) return ;
    if(board[i][j]!='O') return ;
    board[i][j]='z';
    dfs(board , i+1 , j);
    dfs(board , i-1 , j);
    dfs(board , i , j+1);
    dfs(board , i , j-1);

}
    void solve(vector<vector<char>>& board) {
for(int i=0 ; i<board.size() ; i++)
{
    dfs(board , i , 0);
    dfs(board , i , board[0].size()-1);
}
for(int j=0 ; j<board[0].size() ; j++)
{
    dfs(board , 0 , j);
    dfs(board , board.size()-1 , j);
}
for(int i=0 ; i<board.size() ; i++)
{
    for(int j=0 ;j<board[0].size() ; j++)
    {
        if(board[i][j]=='z') board[i][j]='O';
        else board[i][j]='X';
    }
}
    }
};