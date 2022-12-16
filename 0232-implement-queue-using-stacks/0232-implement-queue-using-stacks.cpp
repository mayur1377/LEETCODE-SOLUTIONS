class MyQueue {
public:
    queue<int>s;
    MyQueue() {
        
    }
    void push(int x) {
     s.push(x);   
    }
    int pop() {
       int x=s.front();
        s.pop();
        return x;
    }
    int peek() {
        return s.front();
    }
    bool empty() {
       return s.empty(); 
    }
};
