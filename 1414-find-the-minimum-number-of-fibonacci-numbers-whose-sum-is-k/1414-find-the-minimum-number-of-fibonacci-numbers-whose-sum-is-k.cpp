class Solution {
public:
    int findMinFibonacciNumbers(int k) {
vector<long long>fib;
fib.push_back(1);
fib.push_back(1);
int i=2;
while(fib.back()<k)
{
    fib.push_back(fib[i-1]+fib[i-2]);
    i++;
}
int count=0;
i=fib.size()-1;
while(k)
{
    if(fib[i]<=k)
    {
        k-=fib[i];
        count++;
    }
    i--;
}
        return count;
    }
};