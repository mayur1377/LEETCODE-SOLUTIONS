class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
vector<int>ans;
if(nums.size()<=1)
{
    if(nums.size()==0)
    {
        ans={-1 , -1};
        return ans;
    }
    if(nums.size()==1)
    {
        nums[0]==target?ans={0 , 0} : ans={-1 , -1};
        return ans;
    }
}
int mid;
int i=0 , j=nums.size()-1;
int flag=0;
while(i<=j)
{
    mid=(i+j)/2;
    if(nums[mid]==target)
    {
        flag=1 ;
        break;
    }
    if(nums[mid]>target) j=mid-1;
    else i=mid+1;
}
if(flag==0) 
{
    ans={-1 , -1};
    return ans;
}
int pos=mid;
while(pos>=0 and nums[pos]==target)
{
    pos--;
}
ans.push_back(pos+1);
pos=mid;
while(pos<=nums.size()-1 and nums[pos]==target)
{
    pos++;
}
ans.push_back(pos-1);
return ans;
    }
};