class Solution {
public:
    double myPow(double x, int n) {
double ans=1;
long long nn=n;
if(nn<0) nn*=-1;
while(nn)
{
    if(nn%2)
    {
        ans=ans*x;
        nn-=1;
    }
    else 
    {
        nn/=2;
        x=x*x;
        
    }
}
if(n<0) return (double)(1.0)/(double)ans;
return ans;
    }
};