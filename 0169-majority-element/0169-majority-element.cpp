class Solution {
public:
    int majorityElement(vector<int>& nums) {
int candi=0;
int votes=0;
for(auto i : nums)
{
    if(votes==0)
    {
        candi=i;
        votes=1;
    }
    else if(i==candi) votes++;
    else votes--;
}
        return candi;
    }
};