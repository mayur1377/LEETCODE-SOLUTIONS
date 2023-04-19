class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
stack<int>s;
vector<int>ans(nums2.size() , -1);
s.push(0);
for(int i=1 ; i<nums2.size() ; i++)
{
    while(s.size() and nums2[s.top()]<nums2[i])
    {
        ans[s.top()]=nums2[i];
        s.pop();
    }
    s.push(i);
}
unordered_map<int , int>m;
for(int i=0 ; i<nums2.size() ; i++) m[nums2[i]]=ans[i];
vector<int>fin;
for(auto i : nums1) fin.push_back(m[i]);
return fin;
        return ans;
    }
};