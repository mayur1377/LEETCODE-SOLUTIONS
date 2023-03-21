class Solution {
public:
void help(vector<string>&ans , int i , int j , string temp)
{
    if(i==0 and j==0)
    {
        ans.push_back(temp);
        return ;
    }
    if(i>0) help(ans , i-1 , j+1 , temp+"(");
    if(j>0) help(ans , i , j-1 , temp+")");
}
    vector<string> generateParenthesis(int n) {
vector<string>ans;
help(ans , n , 0 , "");
return ans;
    }
};