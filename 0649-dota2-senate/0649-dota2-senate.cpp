class Solution {
public:
    string predictPartyVictory(string senate) {
    int n = senate.size();
    queue<int> q1, q2;
    for (int i = 0; i < n; i++)
    {
      if (senate[i] == 'R')
        q1.push(i);
      else
        q2.push(i);
    }
    while (!q1.empty() && !q2.empty())
    {
      int rt = q1.front();
      int dt = q2.front();
      q1.pop();
      q2.pop();
      if (rt< dt)
        q1.push(rt + n);
      else
        q2.push(dt + n);
    }
    return q1.size() > q2.size() ? "Radiant" : "Dire";
    }
};