class Solution {
public:
    string getPermutation(int n, int k) {
vector<int>fact;
vector<int>nums;
fact.push_back(1);
k--;
for(int i=1 ; i<=n ; i++)
{
    nums.push_back(i);
    fact.push_back(fact[i-1]*i);
}
string ans="";
for(int i=1 ; i<=n ; i++)
{
    int curr=k/fact[n-i];
    ans+=to_string(nums[curr]);
    nums.erase(nums.begin()+curr);
    k=k%fact[n-i];
}
return ans;
    }
};