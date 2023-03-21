class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
if(nums.size()==1 and nums[0]==target)
{
    return {0 , 0};
}
int i=0;
int j=nums.size()-1;
int flag=0;
while(i<=j)
{
    int mid=(i+j)/2;
    if(nums[mid]==target)
    {
        // cout<<"found";
        i=mid;
        flag=1;
        break;
    }
    if(nums[mid]<target) i=mid+1;
    else j=mid-1;
}
if(flag==0) return {-1 , -1};
int temp=i;
int temp2=i;
while(temp>=0 and nums[temp]==target) temp--;
while(temp2<nums.size() and nums[temp2]==target) temp2++;
vector<int>ans;
ans.push_back(temp+1);
ans.push_back(temp2-1);
return ans;
    }
};