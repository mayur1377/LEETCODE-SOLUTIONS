class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
int count[26]={0};
for(auto i : words2)
{
    int count2[26]={0};
    for(auto j : i)
    {
        count2[j-'a']++;
        count[j-'a']=max(count[j-'a'] , count2[j-'a']);
    }
}
        vector<string>ans;
for(auto i  : words1)
{
    int count2[26]={0};
    for(auto j : i)
    {
        count2[j-'a']++;
    }
    for(int j=0 ; j<=26 ; j++)
    {
        if(j==26)
        {
            ans.push_back(i);
            break;
        }    
        if(count[j]>count2[j]) break;
    }
}
        return ans;
    }
};