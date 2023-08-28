class MyStack {

    queue<int>q1,q2;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q2.empty()){
            q2.push(x);
        }
        while(!q1.empty()){
            int val=q1.front();
            q1.pop();
            q2.push(val);
        }
        // q2.push(x);
        queue<int>q=q1;
        q1=q2;
        q2=q;

    }
    
    int pop() {
        //int val;
        if (q1.empty())
            return -1;
        int val=q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        if (q1.empty())
            return -1;
        int val=q1.front();
        //q1.pop();
        return val;
    }
    
    bool empty() {
        
        if(q1.empty()) return true;
        else return false;
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