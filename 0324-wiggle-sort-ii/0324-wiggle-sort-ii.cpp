class Solution {
public:
    void wiggleSort(vector<int>& nums) {
vector<int>temp=nums;
sort(temp.begin() , temp.end());
int k=nums.size()-1;
for(int i=1 ; i<nums.size() ; i+=2)
{
    nums[i]=temp[k--];
}
for(int i=0 ; i<nums.size()  ; i+=2)
{
    nums[i]=temp[k--];
}
    }
};