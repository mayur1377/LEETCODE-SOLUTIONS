class Solution {
public:
    int maxArea(vector<int>& height) {
int i=0;
int j=height.size()-1;
int ans=0;
while(i<j)
{
    int temp=min(height[i] , height[j])*(j-i);
    ans=max(ans , temp);
    if(height[i]>height[j])j--;
    else i++;
}
    return ans;
    }
};