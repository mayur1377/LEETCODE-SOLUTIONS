class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
vector<int>nums;
for(int i=1 ;i<=n*n ; i++)
{
    nums.push_back(i);
}
vector<vector<int>>ans(n , vector<int>(n , -1));
int top=0;
int bottom=ans.size()-1;
int left=0;
int p=0;
int right=ans[0].size()-1;
while(top<=bottom and left<=right)
{
    for(int i=left ; i<=right ; i++)
    {
        ans[top][i]=nums[p++];
    }
    top++;
    for(int i=top ; i<=bottom ; i++)
    {
        ans[i][right]=nums[p++];
    }
    right--;
    for(int i=right ; i>=left ; i--)
    {
        ans[bottom][i]=nums[p++];
    }
    bottom--;
    for(int i=bottom ; i>=top ; i--)
    {
        ans[i][left]=nums[p++];
    }
    left++;
}
return ans;
    }
};