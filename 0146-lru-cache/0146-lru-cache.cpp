class LRUCache {
public:
class node
{
    public:
    int key;
    int val;
    node* prev;
    node* next;
    node(int key , int val)
    {
        this->key=key;
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
unordered_map<int , node*>m;
node* head=new node(0 , 0);
node* tail=new node(0 , 0);

    
int capacity;
    LRUCache(int capacity) {
    this->capacity=capacity;
    head->next=tail;
    tail->prev=head;
    }
    
void remove(node* curr)
{
    m.erase(curr->key);
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
}
   
void insert(node* curr)
{
    // head->next=curr;
    // curr->prev=head;
    curr->next=head->next;
    head->next->prev=curr;
    head->next=curr;
    curr->prev=head;
    m[curr->key]=curr;
    
}
    
    int get(int key) {
    if(m.find(key)!=m.end())
    {
        node* curr=m[key];
        remove(curr);
        insert(curr);
        return m[key]->val;
    }
    return -1;
    }
    
    void put(int key, int value) {
    if(m.find(key)!=m.end())
    {
        remove(m[key]);
    }
    if(m.size()==capacity) 
        remove(tail->prev);
    insert(new node(key , value));
//         will be inseted at first
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */