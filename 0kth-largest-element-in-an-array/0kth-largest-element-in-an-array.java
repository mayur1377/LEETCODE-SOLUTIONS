class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq= new PriorityQueue<>(Collections.reverseOrder());
        for(int num:nums){
            pq.add(num);
        }
        int p=0;
        while(k>=0)
        {   
              p=pq.poll();
              k--;
              if(k==0) return p;
        }
return p;
        
    }
}