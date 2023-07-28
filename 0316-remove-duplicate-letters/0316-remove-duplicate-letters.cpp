class Solution {
public:
    string removeDuplicateLetters(string s) {
string ans="";
stack<int>p;
unordered_map<char , int>m;
unordered_map<char , bool>vis;
for(auto i : s) m[i]++;
for(int i=0 ; i<s.length() ; i++)
{
    m[s[i]]--;
    if(vis[s[i]]) continue;
//     if we have already added 
    while(p.size() and s[p.top()]>s[i] and m[s[p.top()]]>0)
    {
//         if there is stack , and the top element of stack > current element
//         and we can afford to delete the element
        vis[s[p.top()]]=false;
        p.pop();
    }
    vis[s[i]]=true;
    p.push(i);
}
while(p.size())
{
    ans+=s[p.top()];
    p.pop();
}
reverse(ans.begin() , ans.end());
return ans;
    }
};