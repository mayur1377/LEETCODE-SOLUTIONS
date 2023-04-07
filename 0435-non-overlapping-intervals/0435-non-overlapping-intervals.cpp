class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
sort(intervals.begin(), intervals.end());
int ans=0;
int l=0;
int r=1;
int n=intervals.size();
while(r<n)
{
    if(intervals[l][1]<=intervals[r][0])
    {
        l=r;
        r++;
    }
    else if(intervals[l][1]<=intervals[r][1])
    {
        ans++;
        // l=r;
        r++;
    }
    else if(intervals[l][1]>intervals[r][1])
    {
        ans++;
        l=r;
        r++;
    }
}
return ans;
    }
};