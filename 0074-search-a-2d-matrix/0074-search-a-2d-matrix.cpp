class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
cout<<matrix.size()<<" "<<matrix[0].size();
int i=0;
int j=matrix.size()-1;
int n=matrix[0].size()-1;
int m=0;
while(i<=j)
{
    int mid=(i+j)/2;
    if(matrix[mid][0]<=target and target<=matrix[mid][n])
    {
        vector<int>temp;
        temp=matrix[mid];
        int i=0;
        int j=temp.size()-1;
        while(i<=j)
        {
            int mid=i+j;
            mid/=2;
            if(temp[mid]==target) return 1;
            else if(temp[mid]<target) i=mid+1;
            else j=mid-1;
        }
        return 0;
    }
    else if(matrix[mid][n]<target) i=mid+1;
    else j=mid-1;
}
return 0;
    }
};