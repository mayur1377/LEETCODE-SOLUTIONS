class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;  // Using long to handle possible integer overflow
        long second = LONG_MIN;
        long third = LONG_MIN;
        for (auto num : nums) {
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second && num < first) {
                third = second;
                second = num;
            } else if (num > third && num < second) {
                third = num;
            }
        }

        return third == LONG_MIN ? first : third;
    }
};
