class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
if(k==0) return nums;
if(((2*k)+1)>nums.size())
{
    vector<int>ans(nums.size() , -1);
    return ans;
}
vector<int>ans;
for(int i=0 ; i<k ; i++) ans.push_back(-1);
long long int i=0 , j=0 , sum=0;
for(i=0 ; i<nums.size() ; i++)
{
    if(i-j==(2*k)+1)
    {
        ans.push_back(sum/(2*k+1));
        sum-=nums[j];
        j++;
    }
    sum+=nums[i];
}
// cout<<sum;
ans.push_back((sum/((2*k)+1)));
for(i=0 ; i<k ; i++) ans.push_back(-1);
return ans;
    }
};