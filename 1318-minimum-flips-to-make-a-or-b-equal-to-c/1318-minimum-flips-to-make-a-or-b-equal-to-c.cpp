class Solution {
public:
    int minFlips(int a, int b, int c) {
bitset<32>x(a) , y(b) , z(c);
int count=0;
for(int i=0 ; i<32 ; i++)
{
    if(z[i]==1)
    {
        if(x[i]==0 and y[i]==0) count++;
    }
    else
    {
        if(x[i] and y[i]) count+=2;
        else if(x[i] or y[i]) count++;
    }
}
return count;
    }
};