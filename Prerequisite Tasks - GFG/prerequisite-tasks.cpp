//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& nums) {
	vector<int>adj[N];
	for(auto i : nums)
	{
	    adj[i.first].push_back(i.second);
	   // adj[i.second].push_back(i.first);
	}
	vector<int>need(N , 0);
	for(int i=0 ; i<N; i++)
	{
	    for(auto x : adj[i]) need[x]++;
	}
	queue<int>q;
	for(int i=0 ; i<N ; i++)
	{
	    if(need[i]==0) q.push(i);
	}
    int count=0;
    while(q.size())
    {
        int curr=q.front();
        q.pop();
        count++;
        // cout<<"NOW IN :"<<curr<<endl;
        for(auto i : adj[curr])
        {
            need[i]--;
            if(need[i]==0)
            {
                // count++;
                q.push(i);
            }
        }
    }
    // cout<<count;
    return count==N;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends