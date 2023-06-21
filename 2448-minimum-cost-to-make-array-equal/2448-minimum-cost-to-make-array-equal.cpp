class Solution {
public:
    typedef long long ll;
    long long minCost(vector<int>& nums, vector<int>& cost) {
       int left=*min_element(nums.begin(),nums.end());
       int right=*max_element(nums.begin(),nums.end());
       ll ans=0;
       while(left<=right)
       {
            int mid=left+(right-left)/2; 
            ll cost1=findcost(nums,cost,mid);
            ll cost2=findcost(nums,cost,mid+1);
            ans=min(cost1,cost2);
            if(cost2>cost1)
              right=mid-1;
            else
              left=mid+1;
        }
        return  ans;
    }
      ll findcost(vector<int>& nums, vector<int>& cost,int target)
         {
             ll totalcost=0;
             for(int i=0;i<nums.size();i++)
             {
                 totalcost+=(long long)abs(nums[i]-target)*cost[i];
             }
             return totalcost;
         }
};