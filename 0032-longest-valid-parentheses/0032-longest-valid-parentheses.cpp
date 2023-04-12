class Solution {
public:
    int longestValidParentheses(string s) {
int count=0;
int ans=0;
for(int i=0 ; i<s.length() ; i++)
{
    count=0;
    for(int j=i ; j<s.length() ; j++)
    {
        if(s[j]=='(') count++;
        else if(s[j]==')') count--;
        if(count<0) break;
    if(count==0)
    {
        ans=max(ans , j-i+1);
    }
    }

}
        return ans;
    }
};