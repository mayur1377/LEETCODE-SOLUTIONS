class Solution {
public:
bool ispalin(string s , int i , int x)
{
    while(i<=x)
    {
        if(s[i]!=s[x]) return 0;
        i++;
        x--;
    }
    return 1;
}
void help(string s , vector<vector<string>>&ans , vector<string>temp , int i)
{
    if(i==s.size())
    {
        ans.push_back(temp);
        return ;
    }
    for(int x=i ; x<s.size() ; x++)
    {
        if(ispalin(s , i , x))
        {
            temp.push_back(s.substr(i , x-i+1));
            help(s , ans , temp , x+1);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
vector<vector<string>>ans;
vector<string>temp;
help(s , ans , temp , 0);
return ans;
    }
};