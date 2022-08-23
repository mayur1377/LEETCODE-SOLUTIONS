class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
unordered_map<int , int>m;
for(auto i : nums) m[i]++;
nums.clear();
for(auto i : m)
{
    nums.push_back(i.first);
}
sort(nums.begin() , nums.end());
int earn1=0;
int earn2=0;
int temp;
for(int i=0 ; i<nums.size()  ; i++)
{
    int current=nums[i]*m[nums[i]];
    //cant use both 
    if(i>0 and nums[i]==nums[i-1]+1)
    {
        temp=earn2;
        earn2=max(current+earn1 , earn2);
        earn1=temp;
    }
    else 
    {
        //use both the current and preb values
        temp=earn2;
        earn2=current+earn2;
        earn1=temp;
    }
}
        return earn2;
    }
};