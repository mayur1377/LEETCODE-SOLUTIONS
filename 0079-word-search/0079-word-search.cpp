class Solution {
public:
bool dfs(vector<vector<char>>&board , string word , int i , int j  ,  int c)
{
    if(c==word.size()) return 1;
    if(i>=board.size() or i<0 or j>=board[0].size() or j<0) return 0;
    if(board[i][j]!=word[c]) return 0;
    char x=board[i][j];
    board[i][j]='*';
    bool ret=
    dfs(board , word , i+1 , j , c+1) or
    dfs(board , word , i-1 , j , c+1) or
    dfs(board , word , i , j+1 , c+1) or
    dfs(board , word , i , j-1 , c+1);
    board[i][j]=x;
    
    return ret;
}
    bool exist(vector<vector<char>>& board, string word) {
int m=board.size();
int n=board[0].size();
for(int i=0 ; i<m ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
        if(board[i][j]==word[0])
        {
            if(dfs(board , word , i , j  , 0))return 1;
        }
    }
}
        return 0;
    }
};