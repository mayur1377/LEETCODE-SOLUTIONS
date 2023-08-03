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
    node* head=new node(0,0);
    node* tail=new node(0,0);
    unordered_map<int,node*>m;
    int capacity;

    LRUCache(int capacity) {
    this->capacity=capacity;
    head->next=tail;
    tail->prev=head;
    }
    void remove(node*temp)
    {
        m.erase(temp->key);
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
    }
    void insert(node* temp)
    {
        temp->next=head->next;
        head->next->prev=temp;
        head->next=temp;
        temp->prev=head;
        m[temp->key]=temp;
    }
    
    int get(int key) {
    if(m.find(key)!=m.end())
    {
        node *curr=m[key];
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
    {
        remove(tail->prev);
    }
    insert(new node(key,value));
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */