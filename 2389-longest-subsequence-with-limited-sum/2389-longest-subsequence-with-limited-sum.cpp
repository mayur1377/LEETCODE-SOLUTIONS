class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
vector<int>ans;
sort(nums.begin() , nums.end());
for(auto i : queries)
{
    int x=i;
    int j=0;
    int sum=0;
    while(j<nums.size())
    {
        sum+=nums[j];
        if(sum>x)
        {
            break;
        }
        j++;
    }
    ans.push_back(j);
}
        return ans;
    }
};