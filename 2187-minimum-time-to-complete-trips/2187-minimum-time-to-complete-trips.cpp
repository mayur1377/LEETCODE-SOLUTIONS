class Solution {
    #define ll long long
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll l = 1, r = 100000000000000;
        ll ans = r;
        while (l <= r) {
            ll m = (l+r)/2;
            
            ll trips = 0;
            for (int n : time)
                trips += m / n;
            if (trips >= totalTrips)
                ans = m, r = m-1;
            else
                l = m+1;
        }
        return ans;
    }
};