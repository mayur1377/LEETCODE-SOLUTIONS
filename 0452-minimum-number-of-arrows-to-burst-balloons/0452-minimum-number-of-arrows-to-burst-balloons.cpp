class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }

    int findMinArrowShots(vector<vector<int>>& p) {
        if(p.size() == 0){ return 0; }
      sort(p.begin(),p.end(),cmp);
               
      int t = p[0][1];
      int ans = 1;
      for(int i = 1; i < p.size(); i++){
          if(t < p[i][0]){
            ans++;
            t = p[i][1];
          }
      }

     return ans;

    }
};