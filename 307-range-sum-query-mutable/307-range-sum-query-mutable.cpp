class NumArray {
public:
vector<int>ok;
int sum=0;
    NumArray(vector<int>& nums) {
ok=nums; 
sum=accumulate(ok.begin() ,ok.end() , 0);
    }
    
    void update(int index, int val) {
sum-=ok[index];
ok[index]=val;
sum+=val;

    }
    
    int sumRange(int left, int right) {
return sum-accumulate(ok.begin() , ok.begin()+left, 0)-accumulate(ok.begin()+right+1 , ok.end() , 0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */