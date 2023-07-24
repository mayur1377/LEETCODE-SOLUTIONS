class Solution {
public:
    vector<vector<int>> generate(int numRows) {
vector<vector<int>>ans;
vector<int>start={1};
ans.push_back(start);
for(int i=1 ; i<numRows ; i++)
{
    vector<int>temp(start.size()+1, 1);
    for(int i=1 ; i<start.size() ; i++)
    {
        temp[i]=start[i]+start[i-1];
    }
    ans.push_back(temp);
    start=temp;
}
        return ans;
    }
};