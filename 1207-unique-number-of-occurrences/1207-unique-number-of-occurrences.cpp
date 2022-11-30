class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
   map<int , int> m;
for(auto i:arr)m[i]++;
set<int>a;
for(auto i:m) a.insert(i.second);
return (a.size()==m.size());
    }
};