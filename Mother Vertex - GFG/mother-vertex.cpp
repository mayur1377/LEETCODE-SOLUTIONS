//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    int help(vector<int>adj[] , int i , int &count , vector<int>&visited)
    {
        visited[i]=1;
        count++;
        // cout<<"now in node : "<<i<<endl;
        for(auto x : adj[i])
        {
            if(visited[x]==0)
            {
                help(adj, x , count , visited);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
        for(int i=0 ; i<V ; i++)
        {
            int count=0;
            vector<int>visited(V , 0);
            help(adj , i , count , visited);
            // cout<<count<<endl;
            if(count==V) return i;
        }
        return -1;
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
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends