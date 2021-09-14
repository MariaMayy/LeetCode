class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> del;
    stack<int> add;
    MyQueue() {
        stack<int> del;
        stack<int> add;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        add.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
         int iNum;
         if (!del.empty()) {
             iNum = del.top();
             del.pop();
         }
         else {
             while (!add.empty()) {
                 iNum = add.top();
                 add.pop();
                 del.push(iNum);
             }
             if (!del.empty()) {
                 iNum = del.top();
                 del.pop(); 
                
             }
        }
         return iNum;
    }
    
    /** Get the front element. */
    int peek() {
        int iNum;
         if (!del.empty()) {
             iNum = del.top();
         }
         else {
             while (!add.empty()) {
                 iNum = add.top();
                 add.pop();
                 del.push(iNum);
             }
             if (!del.empty()) {
                 iNum = del.top();
             }
        }
         return iNum;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return add.empty() && del.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
