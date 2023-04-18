class Solution {
public:
    string mergeAlternately(string word1, string word2) {
int i=0;
int j=0;
string ans="";
while(i<word1.length()||j<word2.length())
{
    if(i<word1.length())
    {
        ans+=word1[i];
        i++;
    }
    if(j<word2.length())
    {
    ans+=word2[j];
    j++;
    }
}
        return ans;
    }
};