class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
if(arr.size()==2) return 1;
sort(arr.begin() , arr.end());
int diff=arr[0]-arr[1];
for(int i=1 ; i<arr.size()-1 ; i++)
{
    if(arr[i]-arr[i+1]!=diff) return 0;
}
        return 1;
    }
};