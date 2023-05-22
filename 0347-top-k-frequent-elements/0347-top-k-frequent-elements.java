class Solution {
    public int[] topKFrequent(int[] nums, int k) {
    Map<Integer , Integer>m=new HashMap<>();
    for(int i : nums)
    {
        m.put(i , m.getOrDefault(i , 0)+1);
    }
    List<Integer>[] temp=new List[nums.length+1];
    for(int i : m.keySet())
    {
        if(temp[m.get(i)]==null)
            temp[m.get(i)]=new ArrayList();
        temp[m.get(i)].add(i);
    }
    List<Integer>ans=new ArrayList();
    for(int i=temp.length-1 ; i>=0 ; i--)
    {
        if(temp[i]!=null)
        {
        for(int j : temp[i])
            ans.add(j);
            // System.out.println(j);
        }
        if(ans.size()>=k) break;
    }
    return ans.stream().mapToInt(i->i).toArray();
        
    }
}