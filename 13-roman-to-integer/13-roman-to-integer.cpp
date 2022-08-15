class Solution {
public:
    int romanToInt(string s) {
int n=0;
unordered_map<char , int>m;
m['M']=1000;
m['D']=500;
m['C']=100;
m['L']=50;
m['X']=10;
m['V']=5;
m['I']=1;
int current=0;
for(int i=0 ; i<s.length() ; i++)
{
    if(m[s[i]]>=m[s[i+1]]) n+=m[s[i]];
    else if(m[s[i]]<m[s[i+1]])
    {
        n+=(m[s[i+1]]-m[s[i]]);
        i++;
    }
}
        return n;
    }
};