class Solution {
public:
vector<string>ans;
void help(int open , int close , string temp)
{
    if(open==0 and close==0)
    {
        ans.push_back(temp);
        return ;
    }
    if(open>0) help(open-1 , close , temp+"(");
    if(open<close) help(open , close-1 , temp+")");    
}
    vector<string> generateParenthesis(int n) {
string temp="";
help(n , n , temp );
return ans;
    }
};