class Solution {
public:
    string convert(string s, int numRows) {
vector<vector<char>>ans(numRows , vector<char>(s.length() , '*'));
int i=0;
int j=0;
int k=0;
if(numRows==1 or s.length()==1) return s;
while(k<s.length())
{
    while( k<s.length() and i<numRows-1 )
    {
        ans[i][j]=s[k];
        i++;
        k++;
    }
    while(k<s.length() and i>0 )
    {
        ans[i][j]=s[k];
        i--;
        k++;
        j++;
    }
}
string x="";
for(auto i : ans)
{
    for(auto j : i)
    {
        // cout<<j<<" ";
        if(j!='*') x+=j;
    }
    // cout<<endl;
}
        return x;
    }
};