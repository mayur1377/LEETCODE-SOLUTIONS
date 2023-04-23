class Solution {
public:
    string decodeAtIndex(string s, int k) {
long size=0;
for(int i=0 ; i<s.length(); i++)
{
    if(isdigit(s[i]))
    {
        long long num=s[i]-'0';
        size=size*num;
    }
    else
    {
        size++;
    }
}
for(int i=s.length()-1 ; i>=0 ; i--)
{
    k=k%size;
    if(k==0 and isalpha(s[i]))
    {
        // cout<<s[i];
        return (string)""+s[i];
        return s;
    }
    else if(isdigit(s[i]))
    {
        long long num=s[i]-'0';
        size/=num;
    }
    else size--;
    
}
return s;
    }
};