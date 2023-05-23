class KthLargest {
    PriorityQueue<Integer>p=new PriorityQueue<>();
    int temp;
    public KthLargest(int k, int[] nums) {
    temp=k;
    for(int i : nums)
    {
        p.offer(i);
        if(p.size()>k) p.poll();
    }
    }
    
    public int add(int val) {
    p.offer(val);
    if(p.size()>temp) p.poll();
    return p.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */