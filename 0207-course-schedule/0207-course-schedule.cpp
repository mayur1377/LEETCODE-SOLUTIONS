class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
// if(prerequisites.size()==0 or numCourses==0) return 1;
vector<int>adj[numCourses];
for(auto i : prerequisites)
{
    adj[i[1]].push_back(i[0]);
}
vector<int>need(numCourses , 0);
for(int i=0 ; i<numCourses ; i++)
{
    for(auto x : adj[i]) need[x]++;
}

queue<int>q;
for(int i=0 ; i<numCourses ; i++)
{
    if(need[i]==0) 
    {
        q.push(i);
    }
}
int donecourses=0;
while(q.size())
{
    int course=q.front();
    q.pop();
    donecourses++;
    // cout<<"in course : "<<course<<endl;
    for(auto i : adj[course])
    {
        // cout<<"here";.
        need[i]--;
        if(need[i]==0)
        {
            q.push(i);
        }
    }
}
cout<<donecourses;
return donecourses==numCourses;
    }
};