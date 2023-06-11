class Solution {
public:
void help(vector<int>&nums)
{
    unordered_map<int , int>m;
    for(auto i : nums) m[i]++;
    int mini=*min_element(nums.begin() , nums.end());
    int maxi=*max_element(nums.begin() , nums.end());
    int x=0;
    for(int i=mini ; i<=maxi ; i++)
    {
        while(m[i]>0)
        {
            nums[x++]=i;
            m[i]--;
        }
    };
}
    vector<int> sortArray(vector<int>& nums) {
        help(nums);
        return nums;
    }
};