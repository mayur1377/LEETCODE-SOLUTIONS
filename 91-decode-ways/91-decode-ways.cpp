class Solution {
public:

    int numDecodings(string s) {
vector<int>dp(s.length()+1 , -1);
return help(s,0 , dp);
    }
int help(string s , int i , vector<int>&dp)
{
    if(i==s.length()) return 1;
    if(s[i]=='0') return 0;
    if(dp[i]!=-1) return dp[i];
    int pick=0;
     pick+=help(s , i+1 , dp);
    if(i+1<s.length() and (s[i]-'0')*10+(s[i+1]-'0')<=26)
       {
          pick+=help( s , i+2 , dp); 
       }
    return dp[i]=pick;
}
};