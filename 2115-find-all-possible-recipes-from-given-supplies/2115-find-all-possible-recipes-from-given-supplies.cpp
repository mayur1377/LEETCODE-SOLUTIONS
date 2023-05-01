class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
map<string , int>in;
map<string , vector<string>>adj;
// int n=recipes.size();
for(int i=0 ; i<ingredients.size() ; i++)
{
    for(auto x : ingredients[i])
    {
        adj[x].push_back(recipes[i]);
        in[recipes[i]]++;
//         how many stuff req to cook something??
    }
}
queue<string>q;
for(auto x : supplies)
{
    if(in[x]==0) 
    {
        // cout<<"insereted : "<<x<<endl;
        q.push(x);
    }
}
vector<string>ans;
while(q.size())
{
    string item=q.front();
    // cout<<"now chrcking for item :"<<item<<endl;
    q.pop();
    for(auto i : adj[item])
    {
        in[i]--;
        if(in[i]==0)
        {
            ans.push_back(i);
            q.push(i);
        }
    }  
}
return ans;
    }
};