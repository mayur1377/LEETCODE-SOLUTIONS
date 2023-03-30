class Solution {
public:
unordered_map<string,bool>m;
bool help(string s1 , string s2 )
{
    if(s1.length()!=s2.length()) return 0;
    if(s1==s2 or s1.length()==0) return 1;
    string temp=s1+" "+s2;
    if(m.find(temp)!=m.end()) return m[temp];
    int flag=0;
    int n=s1.length();
    for(int i=1 ; i<s1.length() ; i++)
    {
        if(help(s1.substr(0 , i) , s2.substr(0 , i)) and help(s1.substr(i, n-i) , s2.substr(i, n-i)))
        {
            flag=1;
            break;
        }
        if(help(s1.substr(0 , i) , s2.substr(n-i , i)) and help(s1.substr(i, n-i) , s2.substr(0 , n-i)))
        {
            flag=1;
            break;
        }
    }
    return m[temp]=flag;
}
    bool isScramble(string s1, string s2) {
return help(s1 , s2 ); 
    }
};