class Solution {
public:
    vector<vector<int>> generate(int numRows) {
vector<vector<int>>ans;
vector<int>temp;
temp.push_back(1);
ans.push_back(temp);
if(numRows==1) return ans;
for(int i=1 ; i<numRows ; i++)
{
    vector<int>x;
    x.push_back(1);
    for(int j=0 ; j<temp.size()-1 ; j++)
    {
        x.push_back(temp[j]+temp[j+1]);
    }
    x.push_back(1);
    ans.push_back(x);
    temp=x;
}
return ans;
    }
};