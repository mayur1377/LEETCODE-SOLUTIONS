class Solution {
public:
    bool checkIfPangram(string sentence) {
set<char>s;
for(auto i : sentence) s.insert(i);
return s.size()==26;

    }
};