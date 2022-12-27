class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
vector<int>ans;
for(int i=0 ; i<rocks.size() ; i++)
{
    ans.push_back(capacity[i]-rocks[i]);
}
sort(ans.begin() , ans.end());
int i=0;
int sum=0;
while(i<ans.size() and sum<=additionalRocks)
{
    if(sum+ans[i]<=additionalRocks)
    {
       sum+=ans[i++];
    }
    else break;
}
        return i;
    }
};