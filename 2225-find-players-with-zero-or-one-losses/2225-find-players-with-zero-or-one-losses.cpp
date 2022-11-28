class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
vector<vector<int>>ans;
unordered_map<int , int>m;
for(auto i : matches)
{
    m[i[1]]++;
}
vector<int>zeroloss;
vector<int>oneloss;
for(auto i : matches)
{
    int x=i[0];
    if(m[x]==0) 
    {
        zeroloss.push_back(x);
        m[x]=10000;
    }
    else if(m[x]==1) 
    {oneloss.push_back(x);
             m[x]=10000;

    }
    x=i[1];
    if(m[x]==0) 
    {
     zeroloss.push_back(x);        
     m[x]=10000;
     }
    else if(m[x]==1)
    { 
        oneloss.push_back(x); 
        m[x]=10000;
     } 
}
sort(zeroloss.begin() , zeroloss.end());
sort(oneloss.begin() , oneloss.end());
ans.push_back(zeroloss);
ans.push_back(oneloss);
return ans;
    }
};