class MinStack {
public:
    stack<int> s,min;  // two stacks created 
    MinStack() {
        
    }
    void push(int val) {
       if(min.empty() || val<=min.top()){  //check before pushing is value is minor what 
           min.push(val);
       }
        s.push(val);
    }
    
    void pop() {
      if(min.top()==s.top()){  //pop in before is top is in min stack  or what 
          min.pop();
      }
        s.pop();
    }
    
    int top() {
       return s.top();
        
    }
    int getMin() {
        return min.top();
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