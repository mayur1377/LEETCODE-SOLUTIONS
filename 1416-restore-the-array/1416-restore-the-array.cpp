class Solution {
public:
#define MOD 1000000007
int help(string &s , int &k  ,  int i, vector<int>&dp)
{
   if(i==s.length()) return 1;
   if(dp[i]!=-1) return dp[i];
   string temp="";
   long long int ans=0;
   long long int curr=0;
   for(int x=i ; x<s.length() ; x++)
   {
       int temp=s[x]-'0';
       curr=curr*10+(temp);
       if(curr==0 or curr>k) break;
       // CURR
//       if iss not zero , less than k , and this part is the ?? no leading 0 thing     
//                                    like the start part of that substing shouldnt be 0 , like "0"100
       if(curr>=1 and curr<=k and s[i]!='0')
       {
           ans+=help(s , k , x+1 , dp);
           ans%=MOD;
       }
   }
    return dp[i]=ans%MOD;
}
    int numberOfArrays(string s, int k) {
vector<int>dp(s.length()+1 , -1);
return help(s , k , 0 , dp );
    }
};