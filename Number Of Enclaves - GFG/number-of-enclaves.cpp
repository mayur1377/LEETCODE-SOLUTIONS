//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 void dfs(vector<vector<int>>&grid , int i , int j)
 {
     if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size()) return ;
     if(grid[i][j]==0) return ;
     grid[i][j]=0;
    //  dfs(grid , i , j);
        //  dfs(board , i , j);
    dfs(grid , i+1 , j);
    dfs(grid , i-1 , j);
    dfs(grid , i , j+1);
    dfs(grid , i , j-1);

 }
    int numberOfEnclaves(vector<vector<int>> &grid) {
    for(int i=0 ; i<grid.size() ; i++)
    {
        dfs(grid , i , 0);
        dfs(grid , i , grid[0].size()-1);
    }
    for(int j=0; j<grid[0].size() ; j++)
    {
        dfs(grid , 0 , j);
        dfs(grid , grid.size()-1 , j);
    }
    int count=0;
    for(int i=0 ; i<grid.size(); i++)
    {
        for(int j=0 ; j<grid[0].size() ; j++)
        {
            if(grid[i][j]==1) count++;
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends