class MyStack {
public:
stack<int>s;
    MyStack() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
        
    }
    
    int top() {
       return s.top(); 
    }
    
    bool empty() {
        return s.empty();
    }
};
