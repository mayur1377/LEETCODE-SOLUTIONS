class Solution {
public:
vector<string>ans;
void help(string a , string b)
{
    unordered_map<char , char>m ;
    vector<int>seen(26 , 0);
    
    if(a.length()!=b.length()) return ;
    int flag=1;
    for(int i=0 ; i<b.length() ; i++)
    {
        if(m.find(b[i])==m.end() and seen[a[i]-'a']==0)
        {
            m[b[i]]=a[i]  , seen[a[i]-'a']=1;
        }
        else if(m[b[i]]!=a[i]) flag=0;
    }
    if(flag) ans.push_back(a);
 
    
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
for(auto i : words)
{
    help(i , pattern);
}
return ans;
    }
};