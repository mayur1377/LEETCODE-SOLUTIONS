class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
unordered_map<int , unordered_set<int>>m;
for(auto i : edges)
{
    m[i[0]].insert(i[1]);
    m[i[1]].insert(i[0]);
}
unordered_set<int>visited;
queue<int>q;
q.push(source);
while(q.size())
{
    int node=q.front();
    q.pop();
    visited.insert(node);
    if(node==destination) return 1;
    for(auto i : m[node])
    {
        if(i!=node and visited.find(i)==visited.end()) q.push(i);
    }
}
        return 0;
    }
};