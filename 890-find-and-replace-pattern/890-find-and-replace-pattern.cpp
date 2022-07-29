class Solution {
public:
vector<string>ans;
void help(string a , string b)
{
    unordered_map<char , char>m , n;
    if(a.length()!=b.length()) return ;
    int flag=1;
    for(int i=0 ; i<b.length() ; i++)
    {
        if(m.find(b[i])==m.end())
        {
            m[b[i]]=a[i];
        }
        else if(m[b[i]]!=a[i]) flag=0;
    }
    for(int i=0 ; i<b.length() ; i++)
    {
        if(n.find(a[i])==n.end())
        {
            n[a[i]]=b[i];
        }
        else if(n[a[i]]!=b[i]) flag=0;
    }
    string x="";
    for(int i=0 ; i<a.length() ; i++)
    {
        x+=m[b[i]];
    }
    string y="";
    for(int i=0 ; i<a.length() ; i++)
    {
        y+=n[a[i]];
    }
    if(x==a and y==b) ans.push_back(a);
    cout<<x<<" "<<y<<" \n";
    
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
for(auto i : words)
{
    help(i , pattern);
}
return ans;
    }
};