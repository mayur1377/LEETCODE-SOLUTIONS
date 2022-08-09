class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
int one=INT_MAX;
int two=one;
for(auto i : nums)
{
    if(i<one)
    {
        one=i;
    }
    else if(one<i and i<two)
    {
        two=i;
    }
    else if(one<two and two<i) return 1;
}
        return 0;
    }
};