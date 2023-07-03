class Solution {
public:
    bool buddyStrings(string s, string goal) {
    unordered_map<char , int>m, n;
    for(auto i :s) m[i]++;
    for(auto i : goal) n[i]++;
        if(m!=n) return 0;

if(s==goal)
{

    for(auto i : m)
    {
        if(i.second>1) return 1;
    }
    return 0;
}
// if(s==goal) return 1;/
if(s.length()!=goal.length()) return 0;
int count=0;
for(int i=0 ; i<s.length() ; i++)
{
    if(s[i]!=goal[i]) count++;
}
        return count==2;
    }
};