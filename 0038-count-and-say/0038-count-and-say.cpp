class Solution {
public:
    string countAndSay(int n) {
if(n==1) return "1";
if(n==2) return "11";
string ans="11";
for(int i=3 ; i<=n ; i++)
{
    int temp=ans.size();
    int count=0;
    for(int j=1 ; j<=temp ; j++)
    {
        if(j<temp and ans[j-1]==ans[j])
        {
            count++;
        }
        else 
        {
            count++;
            ans+=to_string(count);
            ans+=ans[j-1];
            count=0;
        }
    }
     ans.erase(0 , temp);
}
        return ans;
    }
};