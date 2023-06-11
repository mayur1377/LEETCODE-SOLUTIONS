class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
vector<int>ans(nums.size() , 0);
int i=0;
int j=nums.size()-1;
for(int k=0 ; k<nums.size() ; k++)
{
    if(nums[k]%2==0) ans[i++]=nums[k];
    else ans[j--]=nums[k];
}
        return ans;
    }
};