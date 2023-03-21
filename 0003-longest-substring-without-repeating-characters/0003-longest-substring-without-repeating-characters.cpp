class Solution {
public:
    int lengthOfLongestSubstring(string s) {
if(s.length()==0) return 0;
unordered_map<int , int>m;
int left=0;
int ans=1;
for(int i=0  ;i<s.length() ; i++)
{
   m[s[i]]++;
   while(m[s[i]]>1)
   {
       m[s[left]]--;
       if(m[s[left]]==0) m.erase(m[s[left]]);
       left++;
   }
   ans=max(ans , i-left+1);
}
return ans;
    }
};