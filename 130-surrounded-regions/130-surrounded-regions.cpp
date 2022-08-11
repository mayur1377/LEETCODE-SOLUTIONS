class Solution {
public:
void dfs(vector<vector<char>>& board , int i , int j )
{
    if(i<0 or i>=board.size() or j<0 or j>=board[0].size()) return ;
    if(board[i][j]!='O') return ;
    board[i][j]='Z';
    dfs(board , i+1 , j);
    dfs(board , i-1 , j);
    dfs(board , i , j+1);
    dfs(board , i , j-1);

}
    void solve(vector<vector<char>>& board) {
for(int i=0 ; i<board.size() ; i++)
{
    dfs(board , i , 0);
    dfs(board , i , board[0].size()-1 );
}
for(int i=0 ; i<board[0].size() ; i++)
{
    dfs(board , 0 , i );
    dfs(board , board.size()-1 , i);
}
for(int i=0 ; i<board.size() ; i++)
{
    for(int j=0; j<board[0].size() ; j++)
    {
        if(board[i][j]=='O') board[i][j]='X';
        else if(board[i][j]=='Z') board[i][j]='O';
    }
}
    }
};