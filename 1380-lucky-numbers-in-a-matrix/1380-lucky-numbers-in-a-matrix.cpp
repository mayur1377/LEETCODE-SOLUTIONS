class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
vector<int>ans;
unordered_set<int>s;
for(int i=0 ; i<matrix.size() ; i++)
{
    int maxi=INT_MAX;
    for(int j=0 ; j<matrix[0].size() ; j++)
    {
        maxi=min(maxi , matrix[i][j]);
    }
    s.insert(maxi);
}
for(int j=0 ; j<matrix[0].size() ; j++)
{
    int mini=INT_MIN;
    for(int i=0 ; i<matrix.size() ; i++)
    {
        mini=max(mini, matrix[i][j]);
    }
    if(s.find(mini)!=s.end()) ans.push_back(mini);
}
return ans;
// tc: o(mn) , sc(max(m,n))
    }
};