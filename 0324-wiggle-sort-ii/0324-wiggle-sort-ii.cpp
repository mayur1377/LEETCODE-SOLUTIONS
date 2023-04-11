class Solution {
public:
    void wiggleSort(vector<int>& nums) {
priority_queue<int>p;
for(auto i : nums) p.push(i);
int i=1;
while(i<nums.size())
{
    nums[i]=p.top();
    p.pop();
    i+=2;
}
i=0;
while(i<nums.size())
{
    nums[i]=p.top();
    p.pop();
    i+=2;
}
    }
};