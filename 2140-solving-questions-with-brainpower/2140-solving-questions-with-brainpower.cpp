class Solution {
public:
long long help(vector<vector<int>>&nums , int i , unordered_map<long long , long long>&m)
{
    if(m.count(i)) return m[i];
    if(i>=nums.size()) return 0;
    long long pick=0;
    long long notpick=0;
    notpick=help(nums , i+1,m);
    pick=nums[i][0]+help(nums , i+nums[i][1]+1 ,m);
    return m[i]=max(pick , notpick);
}
    long long mostPoints(vector<vector<int>>& questions) {
unordered_map<long long,long long>m;
return help(questions , 0 , m);   
    }
};