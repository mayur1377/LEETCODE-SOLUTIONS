class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int i = 0;
int j = matrix[0].size()-1;
while(i<matrix.size() && j>=0)
        {
            int element = matrix[i][j];
            
            if(element == target) return 1;
            
            if(element < target){
                i++;
            }
            else{
                j--;
            } 
        }
        return 0;
    }
};