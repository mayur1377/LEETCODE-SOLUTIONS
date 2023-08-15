class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
int candi1=0;
int candi2=0;
int v1=0;
int v2=0;
for(auto i : nums)
{
    if(i==candi1)
    {
        v1++;
    }
    else if(i==candi2)
    {
        v2++;
    }
    else if(v1==0)
    {
        v1++;
        candi1=i;
    }
    else if(v2==0)
    {
        v2++;
        candi2=i;
    }
    else 
    {
        v1--;
        v2--;
    }
}
int a=0 , b=0;
for(auto i : nums)
{
    if(i==candi1) a++;
    else if(i==candi2) b++;
}
vector<int>ans;
if(a>nums.size()/3) ans.push_back(candi1);
if(b>nums.size()/3) ans.push_back(candi2);
return ans;
    }
};