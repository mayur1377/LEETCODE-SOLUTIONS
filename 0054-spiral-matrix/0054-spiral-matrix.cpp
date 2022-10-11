class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
int top=0;
int bottom=matrix.size()-1;
int left=0;
int right=matrix[0].size()-1;
vector<int>ans;

while(top<=bottom and left<=right)
{
    for(int i=left ; i<=right ; i++)
    {
        cout<<matrix[top][i];
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i=top ; i<=bottom ; i++)
    {
        cout<<matrix[i][right];
                ans.push_back(matrix[i][right]);

    }
    right--;
    if(top<=bottom)
    {
    for(int i=right ; i>=left ; i--)
    {
        cout<<matrix[bottom][i];
                ans.push_back(matrix[bottom][i]);

    }
    bottom--;
    }
    if(left<=right)
    {
    for(int i=bottom ; i>= top ; i--)
    {
        cout<<matrix[i][left];
                ans.push_back(matrix[i][left]);

    }
    left++;
    }
}
return ans;
    }
};