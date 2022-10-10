class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& nums, int k) {
unordered_map<int, int>m;
for(auto i : nums) m[i]++;
vector<int>x;
for(auto i : m) x.push_back(i.second);
sort(x.begin() , x.end());
int i=0;
for(i=0 ; i<x.size() ; i++)
{
    if(x[i]<=k) k-=x[i];
    else break;
}
        return x.size()-i;
    }
};