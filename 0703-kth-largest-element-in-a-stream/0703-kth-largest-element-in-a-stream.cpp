class KthLargest {
public:

    priority_queue<int , vector<int>, greater<int>>p;
    int temp;
    KthLargest(int k, vector<int>& nums) {
        temp=k;
    for(auto i : nums)
    {
        p.push(i);
        if(p.size()>k) p.pop();
    }
    }
    
    int add(int i) {
        p.push(i);
        if(p.size()>temp) p.pop();
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */