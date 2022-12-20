class Solution {
public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> s;
        s.push(0);
        unordered_set<int> seen = {0};
        while (!s.empty()) {
            int i = s.top();
            s.pop();
            for (int j : rooms[i])
                if (seen.count(j) == 0) {
                    s.push(j);
                    seen.insert(j);
                    if (rooms.size() == seen.size()) return true;
                }
        }
        return rooms.size() == seen.size();
    
    }
};