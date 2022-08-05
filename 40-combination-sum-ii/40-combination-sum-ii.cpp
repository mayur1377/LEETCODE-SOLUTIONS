class Solution {
public:
vector<vector<int>>ans;
set<vector<int>>s;
void help(vector<int>candidates , int target , int i , vector<int>temp)
{
    if(target==0)
    {
        ans.push_back(temp);
        return ;
    }
    if(target<0 or i>=candidates.size()) return ;
    //include
    temp.push_back(candidates[i]);
    help(candidates , target-candidates[i] , i+1 , temp );
    temp.pop_back();
    
    int x=candidates[i];
    while(i<candidates.size() and x==candidates[i]) i++;
    help(candidates , target , i , temp);
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
sort(candidates.begin() , candidates.end());
vector<int>temp;
help(candidates , target , 0 , temp);
return ans;
    }
};