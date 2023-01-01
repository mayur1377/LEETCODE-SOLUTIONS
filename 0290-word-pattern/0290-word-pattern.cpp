class Solution {
public:
    bool wordPattern(string pattern, string s) {
map<char , string>m;
for(auto i : pattern) m[i]="1";
string word;
vector<string>ans;
stringstream obj(s);
while (obj >> word) ans.push_back(word); 
if(ans.size()!=pattern.length()) return 0;
int i=0;
while(i<pattern.length())
{
    if(!(m[pattern[i]]=="1" || m[pattern[i]]==ans[i])) return 0;
    else m[pattern[i]]=ans[i];
    i++;
}
set<string>a;
for(auto i : m ) a.insert(i.second);
if(m.size()!=a.size()) return 0;
return 1;
    }
};