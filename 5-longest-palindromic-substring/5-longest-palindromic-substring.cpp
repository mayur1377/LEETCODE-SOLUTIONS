class Solution {
public:
    string longestPalindrome(string s) {
int start=0;
int end=0;
int n=s.size();
int m=INT_MIN;
if(n<=1) return s;
for(int i=0 ; i<n-1 ; i++)
{
    int l=i , r=i;
    while(l>=0 and r<n and s[l]==s[r])
    {
        l--;
        r++;
    }
    int length=r-l-1;
    if(length>m)
    {
        m=length;
        start=l+1;
        end=r-1;
    }
}
for(int i=0 ; i<n-1 ; i++)
{
    int l=i , r=i+1;
    while(l>=0 and r<n and s[l]==s[r])
    {
        l--;
        r++;
    }
    int length=r-l-1;
    if(length>m)
    {
        m=length;
        start=l+1;
        end=r-1;
    }
}
    return s.substr(start , m);
    }
};