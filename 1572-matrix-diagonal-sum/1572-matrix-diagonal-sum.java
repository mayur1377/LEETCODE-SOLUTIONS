class Solution {
    public int diagonalSum(int[][] mat) {
int count=0;
int i=0;
while(i<mat.length)
{
    count+=mat[i][i];
    count+=mat[mat.length-1-i][i];
    i++;
}
return mat.length%2==0? count: count-mat[mat.length/2][mat.length/2];
    }
}