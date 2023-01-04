class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
unordered_map<int , int>m;
for(auto i : tasks)m[i]++;
int count=0;
for(auto i : m)
{
    if(i.second==1) return -1;
    if(i.second==2 or i.second==3) count++;
    else if(i.second>3)
    {
        int x=i.second/3;
        int y=i.second-(3*x);
        if(y==0) count+=x;
        else count+=(x+1);
    }
}
        return count;
    }
};