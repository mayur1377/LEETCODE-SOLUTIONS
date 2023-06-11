class SnapshotArray {
public:
    vector<map<int , int>>nums;
    int count=0;
    SnapshotArray(int length) {
        nums.resize(length);
        for(int i=0 ; i<length ; i++) nums[i][0]=0;
    }
    
    void set(int index, int val) {
        nums[index][count]=val;
    }
    
    int snap() {
        count++;
        return count-1;
    }
    
    int get(int index, int snap_id) {
        if(nums[index].find(snap_id)==nums[index].end())
        {
            auto i=--nums[index].lower_bound(snap_id);
            return i->second;
        }
        return nums[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */