class Solution {
public:
string longestCommonPrefix(vector<string>&str){
    string ans="";
    string firstWord=str[0];

    int count=0;
    int n=str.size();
    int x=0;
    for(auto i : firstWord)
    {
        for(int j=1 ; j<n ; j++)
        {
            string temp=str[j];
            if(x>=temp.size())
            {
                return ans;
            }
            if(i==str[j][x])
            {
                count++;
            }
            else return ans;
        }
        // cout<<count<<" "<<str.size()-2;
        if(count==str.size()-1)
        {
            ans+=i;
            x++;
            count=0;
        }
    }
    return ans;
}
};