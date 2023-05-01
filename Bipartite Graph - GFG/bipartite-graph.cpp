//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private :
bool check(int start, int v , vector<int>adj[] , vector<int>&visited)
{
    queue<int>q;
// 	vector<int>visited(V , -1);
	visited[start]=1;
	q.push(start);
	while(q.size())
	{
	    int node=q.front();
	    q.pop();
	    for(auto i : adj[node])
	    {
	        if(visited[i]==-1)
	        {
	            visited[i]=!visited[node];
	            q.push(i);
	        }
	        else if(visited[i]==visited[node])
	        {
	            return 0;
	        }
	    }
	}
	return 1;
}
public:
	bool isBipartite(int V, vector<int>adj[]){
vector<int>visited(V , -1);
for(int i=0 ; i<V ; i++)
{
    if(visited[i]==-1)
    {
        if(check(i , V , adj , visited)==false) return 0;
    }
}
return 1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends