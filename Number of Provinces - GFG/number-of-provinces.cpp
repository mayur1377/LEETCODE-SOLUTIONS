//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
  private : 
  void dfs(vector<int>&visited , vector<int>a[] , int node)
  {
      if(visited[node]==1) return ;
      visited[node]=1;
      
      for(auto i : a[node])
      {
          if(visited[i]==0)
          {
              dfs(visited , a , i);
          }
      }
  }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
    vector<int>a[V];
    int count=0;
    for(int i=0; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            if(adj[i][j]==1 and i!=j)
            {
                a[i].push_back(j);
                a[j].push_back(i);
            }
        }
    }
    vector<int>visited(V , 0);
    for(int i=0 ; i<visited.size() ; i++)
    {
        if(visited[i]==0)
        {
            count++;
            dfs(visited , a , i);
        }
    }
    return count;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends