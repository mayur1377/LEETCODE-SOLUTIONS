class Solution {
public:
void help(string &ans , string temp , int n , set<string>&s)
{
    if(!n)
    {
        if(s.find(temp)==s.end())       
            ans=temp;
        return ;
    }
    help(ans , temp+'0' , n-1 , s);
    if(ans.empty()) help(ans , temp+'1' , n-1 , s);

}
    string findDifferentBinaryString(vector<string>& nums) {
set<string>s;
for(auto i : nums) 
    s.insert(i);
string ans ;
help(ans , "" , nums.size() , s);
return ans;
    }
};