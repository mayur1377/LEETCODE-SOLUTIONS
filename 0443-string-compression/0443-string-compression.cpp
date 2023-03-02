class Solution {
public:
    int compress(vector<char>& chars) {
if(chars.size()==1) return 1;
vector<string>nums;
int x=1;
for(int i=1 ; i<chars.size() ; i++)
{
    if(chars[i]!=chars[i-1])
    {
        string b;
        b=chars[i-1];
        nums.push_back(b);
        if(x!=1) nums.push_back(to_string(x));
        x=1;
    }
    else
    {
        x++;
    }
}
if(chars[chars.size()-1]==chars[chars.size()-2])
{
        string b;
        b=chars[chars.size()-1];
        nums.push_back(b);
        if(x!=1) nums.push_back(to_string(x));  
}
else 
{
    string b;
    b=chars[chars.size()-1];
    nums.push_back(b);  
}
for(auto i : nums) cout<<i<<" ";
vector<char>ans;
for(auto i : nums)
{
    for(auto j : i) ans.push_back(j);
}
// cout<<endl;
chars=ans;
return ans.size();
    }
};