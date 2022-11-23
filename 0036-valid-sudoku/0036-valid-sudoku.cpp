class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
for(int i=0 ; i<9 ; i++)
{
    map<int , int>m;
    for(int k=0 ; k<board.size() ; k++)
    {
        if(isdigit(board[i][k])) m[board[i][k]]++;
    }
    for(auto i : m)
    {
        if(i.second>1) return 0;
    }
    m.clear();
    for(int j=0 ; j<board[0].size() ; j++)
    {
        if(isdigit(board[j][i])) m[board[j][i]]++;
    }
    for(auto i : m)
    {
        if(i.second>1) return 0;
    }
}
for(int i=0 ; i<9 ; i+=3)
{
    for(int j=0 ; j<9 ; j+=3)
    {
        map<int , int>m;
        for(int k=i ; k<i+3 ; k++)
        {
            for(int l=j ; l<j+3 ; l++)
            {
                if(isdigit(board[k][l])) m[board[k][l]]++;
            }
       
        }
         for(auto x : m )
        {
            if(x.second>1) return 0;
        }
        m.clear();
    }
}
return 1;
    }
};