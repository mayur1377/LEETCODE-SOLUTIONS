class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
vector<int>adj[numCourses];
for(auto i : prerequisites)
{
    adj[i[1]].push_back(i[0]);
}
vector<int>in(numCourses , 0);
for(int i=0 ; i<numCourses ; i++)
{
    for(auto x : adj[i])
    {
        in[x]++;
    }
}
vector<int>ans;
queue<int>q;
for(int i=0 ; i<numCourses ; i++)
{
    if(in[i]==0) 
    {
        ans.push_back(i);
        q.push(i);
    }
}
int count=0;
while(q.size())
{
    int temp=q.front();
    q.pop();
    count++;
    for(auto i : adj[temp])
    {
        in[i]--;
        if(in[i]==0)
        {
            ans.push_back(i);
            q.push(i);
        }
    }
}
if(count!=numCourses) return {};
return ans;
    }
};