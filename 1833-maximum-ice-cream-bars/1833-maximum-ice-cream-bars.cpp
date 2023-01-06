class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
sort(costs.begin() , costs.end());
long long count=0;
long long sum=0;
for(auto i : costs)
{
    if(sum+i<=coins) sum+=i , count++;
    else break;
}
        return count;
    }
};