class Solution {
public:
    string largestNumber(vector<int>& nums) {
vector<string>temp;
for(auto i : nums) temp.push_back(to_string(i));
sort(temp.begin() , temp.end() , [] (string &s1 , string &s2){return s1+s2>s2+s2;});
// for(auto i : temp) cout<<i<<" ";
string ans="";
for(auto i :temp) ans+=i;
while(ans.size()>1 and ans[0]=='0') ans.erase(0 , 1);
return ans;
    }
};