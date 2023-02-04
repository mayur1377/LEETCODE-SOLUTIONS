class Solution {
public:
    bool checkInclusion(string s1, string s2) {
if(s1.length()>s2.length()) return 0;
unordered_map<char , int> m , n;
for(auto i : s1) m[i]++;
int i=0;
for( i=0 ; i<s1.size() ; i++)
{
    n[s2[i]]++;
}
if(m==n) return 1;
int j=0;
i=s1.size();
while(i<s2.size())
{
    n[s2[i++]]++;
    if(n[s2[j]]==1)
    {
        n.erase((s2[j]));
    }
    else n[s2[j]]--;
    j++;
    if(m==n) return 1;
}
        return 0;
    }
};