//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    void dfs(vector<vector<char>>&grid , int i , int j)
    {
        if(min(i , j)<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]!='X') return ;
        grid[i][j]='.';
        dfs(grid , i+1 , j);
        dfs(grid , i-1 , j);
        dfs(grid , i , j+1);
        dfs(grid , i , j-1);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        int ans=0;
        for(int i=0 ; i<grid.size() ; i++)
        {
            for(int j=0 ; j<grid[i].size() ; j++)
            {
                if(grid[i][j]=='X')
                {
                    ans++;
                    dfs(grid , i , j);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends