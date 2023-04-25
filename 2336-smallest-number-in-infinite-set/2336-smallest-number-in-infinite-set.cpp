class SmallestInfiniteSet {
public:
map<int , int>m;

    SmallestInfiniteSet() {
for(int i=1 ; i<=1000 ; i++) m[i]=1;        
    }
    
    int popSmallest() {
auto x=m.begin();
int small=x->first;
m.erase(small);
return small;
    }
    
    void addBack(int num) {
if(m[num]==0)
{
    m[num]=1;
}
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */