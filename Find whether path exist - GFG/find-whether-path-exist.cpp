//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    bool help(int i , int j , vector<vector<int>>&grid)
    {
        if(min(i , j)<0 or i>=grid.size() or j>=grid.size() or grid[i][j]==0) return 0;
        if(grid[i][j]==2) return 1;
        grid[i][j]=0;
        int up=help(i+1 , j , grid);
        int down=help(i-1 , j , grid);
        int right=help(i , j+1 , grid);
        int left=help(i , j-1 , grid);
        return up or left or right or down;
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        for(int i=0 ; i<grid.size() ; i++)
        {
            for(int j=0 ; j<grid[0].size() ; j++)
            {
                if(grid[i][j]==1)
                {
                    if(help(i , j , grid)==true) return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends