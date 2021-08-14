class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st, stMin;
    MinStack() {
        stack<int> st;
        stack<int> stMin;
    }
    
    void push(int val) {
        st.push(val);
        if (stMin.empty()) {
            stMin.push(val);
        } else {
            stMin.push(min(val, stMin.top()));
        }
            
    }
    
    void pop() {
        st.pop();
        stMin.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stMin.top();
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
