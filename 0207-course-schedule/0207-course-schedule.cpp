class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
vector<int>adj[n];
for(auto i : p)
{
    adj[i[1]].push_back(i[0]);
}
vector<int>in(n , 0);
for(int i=0 ; i<n ; i++)
{
    for(auto x : adj[i]) in[x]++;
}
queue<int>q;
int count=0;
for(int i=0; i<n ; i++)
{
    if(in[i]==0) q.push(i);
}
while(q.size())
{
    count++;
    int top=q.front();
    q.pop();
    for(auto i : adj[top])
    {
        in[i]--;
        if(in[i]==0)
        {
            q.push(i);
        }
    }
}
return count==n;
    }
};