class MinStack {
public:
    stack<long long> st;
    long long mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            mini=value;
            st.push(value);
        }
        else{
            if(value>mini) st.push(value);
            else{
                st.push((2LL*value)-mini);
                mini=value;
            }
        }
    }
    
    void pop() {
        long long x=st.top();
        if(x<mini) mini=(2*mini)-x;
        st.pop();
    }
    
    int top() {
        long long x=st.top();
        if(mini>x) return (int)mini;
        return (int)x;
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */