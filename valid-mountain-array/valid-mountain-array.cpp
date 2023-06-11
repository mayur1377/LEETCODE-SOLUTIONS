class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
if(arr.size()<3 || arr[0]==arr[1] || arr[arr.size()-1]==arr[arr.size()-2] || is_sorted(arr.begin() , arr.end())) return 0;
for(int i=0 ; i<arr.size()-1 ; i++)
{
    if(arr[i]==arr[i+1]) return 0;
}
int i=0;
int inc=0;
while(i<arr.size()-1 and arr[i]<arr[i+1])
{
    i++;
    inc++;
}
int dec=0;
while(i<arr.size()-1 and arr[i]>arr[i+1])
{
    i++;
    dec++;
}
if(i==arr.size()-1 and inc and dec) return 1;
return 0;

    }
};