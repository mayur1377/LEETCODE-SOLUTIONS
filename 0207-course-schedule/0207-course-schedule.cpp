class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
vector<int>adj[numCourses+1];
for(auto i : prerequisites)
{
    adj[i[1]].push_back(i[0]);
}
vector<int>in(numCourses , 0);
for(int i=0  ;i<numCourses ; i++)
{
    for(auto j : adj[i])
    {
        in[j]++;
    }
}
queue<int>q;
for(int i=0 ; i<numCourses ; i++)
{
    if(in[i]==0) q.push(i);
}
vector<int>nums;
while(q.size())
{
    int currcourse=q.front();
    q.pop();
    nums.push_back(currcourse);
    // cout<<currcourse<<" "<<in[currcourse]<<endl;
    for(auto i : adj[currcourse])
    {
        in[i]--;
        if(in[i]==0)q.push(i);
    }
}
// for(auto i : nums) cout<<i<<" ";
// cout<<nums.size();
return nums.size()==numCourses;
    }
};