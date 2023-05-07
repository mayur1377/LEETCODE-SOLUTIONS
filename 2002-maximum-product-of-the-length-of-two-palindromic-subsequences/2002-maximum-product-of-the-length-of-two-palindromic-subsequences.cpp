class Solution {
public:
int ans=INT_MIN;
bool check(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<j)
    {
        if(s[i++]!=s[j--]) return 0;
    }
    return 1;
}
void  help(string &s , int i , string x , string y)
{
    if(i>=s.length())
    {
        if(check(x) and check(y))
        {
            ans=max(ans , (int)x.size()*(int)y.size());
        }
        return ;
    }
    
    x.push_back(s[i]);
    help(s , i+1 , x , y);
    x.pop_back();
    
    y.push_back(s[i]);
    help(s , i+1 , x , y);
    y.pop_back();
    
    
    help(s, i+1 , x , y);
}
    int maxProduct(string s) {
string s1="" , s2="";
help(s , 0 , s1 , s2);
return ans;
    }
};