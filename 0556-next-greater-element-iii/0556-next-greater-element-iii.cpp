class Solution {
public:
    int nextGreaterElement(int n) {
string digits=to_string(n);
next_permutation(digits.begin() , digits.end());
auto x=stoll(digits);
if(x>INT_MAX  or x<=n) return -1;
return x;
    }
};