class MinStack {
public:
    stack<int> s;
    vector<int> ans;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        ans.push_back(val);
    }
    
    void pop() {
        s.pop();
        ans.pop_back();
    }
    
    int top() {
         return s.top();
    }
    
    int getMin() {
        return *min_element(ans.begin(),ans.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */