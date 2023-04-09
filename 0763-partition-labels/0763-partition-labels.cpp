class Solution {
public:
    vector<int> partitionLabels(string s) {
unordered_map<char , int>m;
for(int i=0 ; i<s.size() ; i++)
{
    m[s[i]]=i;
}
vector<int>ans;
int end=0;
int count=0;
for(int i=0 ; i<s.size() ; i++)
{
    end=max(end , m[s[i]]);
    count++;
    if(i==end)
    {
        ans.push_back(count);
        count=0;
    }
}
        return ans;
    }
};