class Solution {
    public int climbStairs(int n) {
List<Integer>dp=new ArrayList<>();
dp.add(0);
dp.add(1);
if(n<=1) dp.get(n);
for(int i=2; i<= n+1 ; i++)
{
    dp.add(dp.get(i-1)+dp.get(i-2));
}
// for(int i=0 ; i<dp.size() ; i++) System.out.println(dp.get(i));
return dp.get(n+1);
    }
}