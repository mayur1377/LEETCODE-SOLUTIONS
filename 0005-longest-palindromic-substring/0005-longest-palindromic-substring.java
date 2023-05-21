class Solution {
public  int help(String s , int l , int r)
{
    while(l>=0 && r<s.length() && s.charAt(l)==s.charAt(r))
    {
        l--;
        r++;
    }
    return r-l-1;
}
    public String longestPalindrome(String s) {
int len=0;
int start=0;
for(int i=0 ; i<s.length() ; i++)
{
    int l1=help(s , i , i);
    int l2=help(s , i , i+1);
    int ans=Math.max(l1 , l2);
    if(ans>len)
    {
        len=ans;
        start=i-(ans-1)/2;
    }
}
return s.substring(start, start + len);
    }
}