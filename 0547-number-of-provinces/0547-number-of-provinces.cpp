class Solution {
public:
void dfs(vector<int>&vistied , vector<int>adj[] , int node)
{
    vistied[node]=1;
    for(auto i : adj[node])
    {
        if(vistied[i]==0)
        {
            dfs(vistied , adj , i);
        }
    }
}
    int findCircleNum(vector<vector<int>>& nums) {
vector<int>adj[nums.size()+1];
int x=1;
for(auto i :nums)
{
    vector<int>temp=i;
    for(int i=0 ; i<temp.size() ; i++)
    {
        if(temp[i]==1)
        {
            adj[x].push_back(i+1);
            adj[i+1].push_back(x);
        }
    }
    x++;
}
int count=0;
vector<int>visited(nums.size()+1 , 0);
for(int i=1 ; i<=nums.size() ; i++)
{
    if(visited[i]==0)
    {
        count++;
        dfs(visited , adj , i);
    }
}
return count;
    }
};