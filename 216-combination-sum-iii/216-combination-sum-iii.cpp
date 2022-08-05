class Solution {
public:
vector<vector<int>>ans;
void help(vector<int>nums , int k , int target , vector<int>temp , int i  )
{
    if(target==0 and temp.size()==k)
    {
        ans.push_back(temp);
        return ;
    }
    if(i==nums.size() or target<0 or temp.size()>k) return ;
    help(nums , k , target , temp , i+1 );
    
    temp.push_back(nums[i]);
    help(nums , k , target-nums[i] , temp , i+1);
    temp.pop_back();
}
    vector<vector<int>> combinationSum3(int k, int n) {
vector<int>nums;
for(int i=1 ; i<=9 ; i++)
{
    nums.push_back(i);
}
vector<int>temp;
help(nums , k ,  n   , temp , 0);
return ans;
    }
};