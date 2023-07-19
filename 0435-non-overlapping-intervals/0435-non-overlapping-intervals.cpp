class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
int ans=0;
sort(intervals.begin() , intervals.end());
int l=0;
int r=1;
while(r<intervals.size())
{
    if(intervals[l][1]<=intervals[r][0])
    {
        l=r;
        r++;
    }
    else
    {
        ans++;
        if(intervals[l][1]>intervals[r][1])
        {
            l=r;
            r++;
        }
        else if(intervals[l][1]>=intervals[r][0])
        {
            r++;
        }
    }
}
        return ans;
    }
};