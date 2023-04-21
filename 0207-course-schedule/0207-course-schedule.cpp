class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
vector<int>adj[numCourses];
for(auto i : prerequisites)
{
    adj[i[1]].push_back(i[0]);
}
vector<int>in(numCourses,0);
for(int i=0  ;i<numCourses ; i++)
{
    for(auto x : adj[i]) in[x]++;
}
int count=0;
queue<int>q;
for(int i=0 ; i<numCourses ; i++) 
{
    if(in[i]==0) q.push(i);
}
while(q.size())
{
    count++;
    int temp=q.front();
    q.pop();
    for(auto  i : adj[temp])
    {
        in[i]--;
        if(in[i]==0)
        {
            q.push(i);
        }
    }
}
return count==numCourses;
    }
};