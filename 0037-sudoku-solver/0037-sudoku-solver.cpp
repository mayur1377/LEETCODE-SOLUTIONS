class Solution {
public:
bool help(vector<vector<char>>&boards)
{
    for(int i=0 ; i<boards.size() ; i++)
    {
        for(int j=0 ; j<boards[0].size() ; j++)
        {
            if(boards[i][j]=='.')
            {
                for(char x='1' ; x<='9' ; x++)
                {
                    if(check(boards , i , j , x))
                    {
                        boards[i][j]=x;
                    if(help(boards)==true) return 1;
                    else boards[i][j]='.';
                    }

                }
                return 0;
            }
        }
    }
    return 1;
}
bool check(vector<vector<char>>&boards , int i , int j , char x)
{
    for(int k=0 ; k<9 ; k++)
    {
        if(boards[i][k]==x) return 0;
        if(boards[k][j]==x) return 0;
        if(boards[3*(i/3)+k/3][3*(j/3)+k%3]==x) return 0;
    }
    return 1;
}
    void solveSudoku(vector<vector<char>>& board) {
help(board);
    }
};