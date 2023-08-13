class Solution {
public:
vector<string>ans;
void help(int open , int close , string x)
{
    if(open==0 and close==0)
    {
        ans.push_back(x);
        return ;
    }
    if(open>0) help(open-1 , close , x+"(");
    if(open<close) help(open , close-1 , x+")");
}
    vector<string> generateParenthesis(int n) {
string x="";
help(n ,n , x);
return ans;
    }
};