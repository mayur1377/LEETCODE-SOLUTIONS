class Solution {
public:
vector<int> help(string x)
{
    vector<int>temp;
    int num=0;
    for(auto i : x)
    {
        if(i=='.')
        {
            temp.push_back(num);
            num=0;
        }
        else
        {
            num=num*10+(i-'0');
            
        }
    }
    temp.push_back(num);
    return temp;
}
    int compareVersion(string v1, string v2) {
vector<int>a=help(v1);
vector<int>b=help(v2);
while(a.size()<b.size()) a.push_back(0);
while(a.size()>b.size()) b.push_back(0);
for(int i=0 ; i<a.size() ; i++)
{
    if(a[i]<b[i])
    {
        return -1;
    }
    else if(a[i]>b[i]) return 1;
}
        return 0;
    }
};