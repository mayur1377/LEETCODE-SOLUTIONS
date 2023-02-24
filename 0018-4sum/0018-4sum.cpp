class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
sort(nums.begin(), nums.end());
set<vector<int>>s;
for(int i=0 ; i<nums.size() ; i++)
{
    for(int j=i+1 ; j<nums.size() ; j++)
    {
        long long front=j+1;
        long long back=nums.size()-1;
        long long target2=target-nums[i];
        target2-=nums[j];
        while(front<back)
        {
            long long temp=nums[front]+nums[back];
            if(temp==target2)
            {
                vector<int>ans;
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                ans.push_back(nums[front]);
                ans.push_back(nums[back]);
                for(auto i : ans) cout<<i<<" ";
                cout<<endl;
                s.insert(ans);
                while(front<back and ans[2]==nums[front]) front++;
                while(front<back and ans[3]==nums[back]) back--;
            }
            else if(temp<target2)
            {
                front++;
            }
            else if(temp>target2) back--;
        }   
    }
}
vector<vector<int>>ans(s.begin() , s.end());
        return ans;
    }
};