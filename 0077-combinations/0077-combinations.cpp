class Solution {
public:
void help(int ind , vector<int>temp , vector<vector<int>>&ans , int k , int n )
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=ind ; i<=n ; i++)
    {
        temp.push_back(i);
        help(i+1 , temp , ans , k , n);
        temp.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
vector<int>temp;
vector<vector<int>>ans;
int ind=1;
help(ind , temp ,ans , k , n );
return ans;
    }
};