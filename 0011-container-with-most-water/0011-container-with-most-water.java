class Solution {
    public int maxArea(int[] height) {
int i=0;
int ans=0;
int j=height.length-1;
while(i<j)
{
    int temp=Math.min(height[i] , height[j])*Math.abs(i-j);
    ans=Math.max(ans ,temp);
    if(height[i]>height[j]) j--;
    else i++;
}
return ans;
    }
}