class Solution {
public:
bool isplain(string s , int i , int j)
{
    while(i<=j)
    {
        if(s[i]!=s[j]) return 0;
        else 
        {
            i++;
            j--;
        }
    }
    return 1;
}
void help(string s , int i , vector<vector<string>>&ans , vector<string>&temp)
{
    if(i==s.size())
    {
        ans.push_back(temp);
    }
    for(int ind=i ; ind<s.size() ; ind++)
    {
        if(isplain(s , i , ind ))
        {
            string curr=s.substr(i , ind-i+1 );
            temp.push_back(curr);
            help(s , ind+1 , ans , temp);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
vector<vector<string>>ans;
vector<string>temp;
help(s  , 0 , ans , temp);
return ans;
    }
};