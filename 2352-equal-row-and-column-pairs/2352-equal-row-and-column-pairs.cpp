class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
map<vector<int> ,int >m  , n;
for(int i=0 ; i<grid.size() ; i++ )
{
    vector<int>temp;
    for(int j=0 ; j<grid[0].size() ; j++)
    {
        temp.push_back(grid[i][j]);
    }
       for(auto x : temp)
    {
        cout<<x;
    }
    cout<<endl;
    m[temp]++;
}
int ans=0;
cout<<endl<<endl;
for(int i=0 ; i<grid.size() ; i++ )
{
    vector<int>temp;
    for(int j=0 ; j<grid[0].size() ; j++)
    {
        temp.push_back(grid[j][i]);
    }
    for(auto x : temp)
    {
        cout<<x;
    }
    cout<<endl;
    if(m[temp])
    {
        ans+=m[temp];
    }
    
}

return ans;
    }
};