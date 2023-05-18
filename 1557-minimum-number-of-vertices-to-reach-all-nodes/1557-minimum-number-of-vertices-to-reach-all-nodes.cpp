class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
vector<int>ans;
vector<int>visited(n+1 , 0);
for(auto i : edges)
{
    if(visited[i[1]]==0) visited[i[1]]=1;
}
for(int i=0 ; i<n ; i++)
{
    if(visited[i]==0) ans.push_back(i);
}
return ans;
    }
};