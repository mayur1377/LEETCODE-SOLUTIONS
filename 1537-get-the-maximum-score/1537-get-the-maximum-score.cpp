class Solution {
public:
#define mod 1000000007
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
long long i=0,j=0,sum1=0,sum2=0,ans=0;
while(i<nums1.size() or j<nums2.size())
{
    // sum1%=mod;
    // sum2%=mod;
    if(i<nums1.size() and (j==nums2.size() or nums1[i]<nums2[j]))
    {
        sum1+=nums1[i];
        i++;
    }
    else if(j<nums2.size() and (i==nums1.size() or nums2[j]<nums1[i]))
    {
        sum2+=nums2[j];
        j++;
    }
    else
    {
//         matlab both  are eq
        sum1=sum2=nums1[i]+max(sum1,sum2);
        i++;
        j++;
        
    }
}
ans=max(sum1,sum2);
ans%=mod;
        return ans;
    }
};