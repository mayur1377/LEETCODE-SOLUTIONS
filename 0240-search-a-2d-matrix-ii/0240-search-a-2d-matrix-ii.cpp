class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int m=matrix.size();
int n=matrix[0].size();
int row=0;
int col=n-1;
while(row<m and col>=0)
{
    if(matrix[row][col]==target) return 1;
    else if(matrix[row][col]>target) col--;
    else row++;
}
        return 0;
    }
};