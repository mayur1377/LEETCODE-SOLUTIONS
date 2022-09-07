class Solution {
public:
vector<int>ans;
void help(int i , int n , int k)
{
    if(n==0)
    {
        ans.push_back(i);
    }
    else 
    {
        int x=i%10;
        if(x+k<=9)
        {
            help(i*10+k+x , n-1 , k);
        }
        if(k!=0 and x>=k) 
        {
            help(i*10+x-k ,n-1 , k);
        }
    }
}
    vector<int> numsSameConsecDiff(int n, int k) {
for(int i=1 ; i<=9 ; i++)
{
    help(i , n-1 , k);
}
return ans;
    }
};