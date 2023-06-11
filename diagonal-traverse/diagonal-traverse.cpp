class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
vector<int>ans;
map<int , vector<int>>m;
for(int i=0 ; i<mat.size() ; i++)
{
    for(int j=0 ; j<mat[0].size() ; j++)
    {
        m[i+j].push_back(mat[i][j]);
    }
}
for(auto i : m)
{
    vector<int>temp=i.second;
    if(i.first%2==0)
    {
        reverse(temp.begin() , temp.end());
    }
    for(auto x : temp) ans.push_back(x); 
}
// reverse(ans.begin() , ans.end());
        return ans;
    }
};