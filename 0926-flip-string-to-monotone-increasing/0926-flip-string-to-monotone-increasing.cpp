class Solution {
 public:
  int minFlipsMonoIncr(string S) {
    int ans = 0;
    int ones = 0;

    for (char c : S) {
      if (c == '1')
        ++ones;
      else
        ans = min(++ans, ones);
    }

    return ans;
  }
};