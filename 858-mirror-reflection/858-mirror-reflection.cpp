class Solution {
public:
int g(int p , int q)
{
    while(q) 
    {
        p=p%q;
        swap(p , q);
        
    }
    return p;
}
    int mirrorReflection(int p, int q) {
int lcm=p*q/g(p, q);
p=lcm/p;
q=lcm/q;
if(p%2==0) return 0;
if(q%2==0) return 2;
return 1;
    }
};