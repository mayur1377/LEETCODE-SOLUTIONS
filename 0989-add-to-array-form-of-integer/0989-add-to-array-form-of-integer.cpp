class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
int x=nums.size()-1;
while(x>=0)
{
    nums[x]+=(k%10);
    k/=10;
    k+=nums[x]/10;
    nums[x]%=10;
    x--;
}
    while(k!=0)
    {
        nums.insert(nums.begin() , k%10);
        k/=10;
    }
        return nums;
    }
};