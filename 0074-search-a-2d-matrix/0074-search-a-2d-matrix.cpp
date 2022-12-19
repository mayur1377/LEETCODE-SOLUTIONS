class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
for(auto i : matrix)
{
    for(auto j : i)
    {
        if(j==target) return 1;
    }
}
        return 0;
    }
};