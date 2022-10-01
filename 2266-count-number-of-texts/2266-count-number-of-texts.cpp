class Solution {
public:
int x=pow(10, 9)+7;
    int countTexts(string s) {
vector<int>dp(s.length()+4 , 0);
dp[s.length()]=1;
for(int i=s.length()-1  ; i>=0 ; i--)
{
    long pick=0;
    pick+=dp[i+1];
    if( s[i]==s[i+1])
    {
        pick+=dp[i+2];
    }
     if(s[i]==s[i+1] and s[i+1]==s[i+2])
    {
        pick+=dp[i+3]; 
    }
    if(s[i]==s[i+1] and s[i+1]==s[i+2] and s[i+2]==s[i+3] and (s[i]=='7' or s[i]=='9'))
    {
        pick+=dp[i+4];
    }    
    dp[i]=pick%x;
}
int ans=dp[0];
return ans%x;
    }
};