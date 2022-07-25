class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
vector<int>ans;
cout<<nums.size();
if(nums.size()<1)
{
    if(nums.size()==0) 
    {
        ans={-1 , -1};
        return ans;
    }
     if(nums[0]==target) ans={0 , 0 } ;
     else if(nums[1]==target) ans={1 , 1};
    else ans={-1 , -1};
    return ans;
}
int i=0 ,j=nums.size()-1;
int pos=-1;
while(i<=j)
{
    int mid=(i+j)/2;
    if(nums[mid]==target)
    {
        pos=mid;
        break;
    }
    else if(nums[mid]<target) i=mid+1;
    else j=mid-1;
}
if(pos==-1)
{
    ans={-1 , -1};
    return ans;
}
i=pos;
while(i>=0 and nums[i]==target) --i;
ans.push_back(i+1);
i=pos;
while(i<nums.size() and nums[i]==target) ++i;
ans.push_back(i-1);
return ans;
    }
};