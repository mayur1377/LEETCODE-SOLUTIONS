class Solution {
public:
    vector<int> getRow(int n) {
vector<int>ans;
ans.push_back(1);
for(int i=2 ; i<=n+1  ;i++)
{
    vector<int>temp(i , 1);
    for(int j=1 ; j<temp.size()-1 ; j++)
    {
        temp[j]=ans[j]+ans[j-1];
    }
    ans=temp;
    for(auto x : temp)cout<<x<<" ";
    cout<<endl;
}
return ans;
    }
};