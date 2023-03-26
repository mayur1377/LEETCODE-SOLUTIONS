class Solution {
public:
vector<vector<int>>g;
vector<int>visited;
int ans=-1;
void help(int i , int count , unordered_map<int ,int>&m)
{
    visited[i]=1;
    m[i]=count;
    
    for(auto x : g[i])
    {
        if(visited[x]==0)
        {
            help(x , count+1 , m);
        }
        else if(m.count(x))
        {
            ans=max(ans , count-m[x]);
        }
    }
}
    int longestCycle(vector<int>& edges) {
int n=edges.size();
g.resize(n);
visited.resize(n , 0);
for(int i=0 ; i<n ; i++)
{
    if(edges[i]!=-1) g[i].push_back(edges[i]);
}
for(int i=0 ; i<n ; i++)
{
    unordered_map<int , int>m;
    help(i , 0 , m);
}
if(ans==-1) return -1;
return ans+1;
    }
};