class Solution{
public:
int minScore(int n, vector<vector<int>>& roads) {
int k=roads.size();
        vector<vector<pair<int,int>>>temp(n+1);
        for(int i=0;i<k;i++)
        {
            temp[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            temp[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        } 
    // for(auto i : temp)
    // {
    //     vector<pair<int , int>>x=i;
    //     for(auto j : x)
    //     {
    //         cout<<j.first<<" "<<j.second<<endl;
    //     }
    // }
        vector<int>vis(n+2,0);   
        queue<vector<int>>q;
        q.push({n,INT_MAX});
        int ans=INT_MAX; 
        while(q.size())
        {
            auto curr=q.front();
            q.pop();
            ans=min(ans,curr[1]);
            vis[curr[0]]=1; 
            for(auto i:temp[curr[0]])
            {
                if(!vis[i.first])
                {
                    q.push({i.first,i.second});
                }
            }
        }
        return ans;
}
};