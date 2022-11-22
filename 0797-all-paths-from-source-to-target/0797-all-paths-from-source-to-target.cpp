class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
vector<vector<int>>ans;
vector<int>temp;
queue<vector<int>>q;
temp.push_back(0);
int node=0;
q.push(temp);
while(q.size())
{
    temp=q.front();
    q.pop();
    int current=temp.back();
    if(current==graph.size()-1)
    {
        ans.push_back(temp);
    }
    for(auto i : graph[current])
    {
        vector<int>t(temp);
        t.push_back(i);
        q.push(t);
    }
}
        return ans;
    }
};