class Solution {
public:
int xo[4]={-1 , 0 , 1 , 0};
int yo[4]={0 , -1 , 0 , 1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
queue<pair<int , int>>q;
vector<vector<int>>ans(mat.size() , vector<int>(mat[0].size() , -1));
for(int i=0 ; i<mat.size() ; i++)
{
    for(int j=0 ; j<mat[0].size() ; j++)
    {
        if(mat[i][j]==0)
        {
            q.push({i , j});
            ans[i][j]=0;
        }
    }
}
while(q.size())
{
    pair<int,int>point=q.front();
    q.pop();
    for(int i=0  ;i<4 ; i++)
    {
        int x=point.first+xo[i];
        int y=point.second+yo[i];
        if(x>=0 and y>=0 and x<mat.size() and y<mat[0].size() and mat[x][y]==1 and ans[x][y]==-1)
        {
            ans[x][y]=ans[point.first][point.second]+1;
            q.push({x , y});
        }
    }
}
        return ans;
    }
};