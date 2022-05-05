class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    int pee;
    void push(int x) {
        pee=x;
        q.push(x);
    }
    
    int pop() {
        int n=q.size();
        n=n-1;
        while(n--){
            int k=q.front();
            pee=q.front();
            q.pop();
            q.push(k);
        }
        int k=q.front();
        q.pop();
        return k;
    }
    
    int top() {
        return pee;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */