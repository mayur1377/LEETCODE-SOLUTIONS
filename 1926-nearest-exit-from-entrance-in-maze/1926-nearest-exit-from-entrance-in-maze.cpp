class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
int dirx[4]={-1 , 0 , 0 , 1};
int diry[4]={ 0 , 1 ,-1 , 0};
int m=maze.size() , n=maze[0].size();
queue<array<int , 3>>q;
q.push({entrance[0] , entrance[1] , 0});
while(q.size())
{
    auto [i , j , steps]=q.front();
    q.pop();
    bool entrancep= i==entrance[0] && j==entrance[1];
    bool edge=i==0 or j==0 or i==m-1 or j==n-1;
    if(!entrancep and edge) return steps;
    
    for(int d=0 ; d<4 ;d++)
    {
        int ni=i+dirx[d];
        int nj=j+diry[d];
        if(ni>=0 and nj>=0 and ni<m and nj<n and maze[ni][nj]=='.')
        {
            maze[ni][nj]='+';
            q.push({ni , nj , steps+1});
        }
    }
}
        return -1;
    }
};