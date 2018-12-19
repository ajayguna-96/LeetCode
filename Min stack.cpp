class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> st;
    vector<int> min;
    MinStack() {

        min.push_back(INT_MAX);

    }

    void push(int x) {
        if(x < min.back()){
            min.push_back(x);
        }
        else{
            min.push_back(min.back());
        }
        st.push_back(x);

    }

    void pop() {
        st.pop_back();
        min.pop_back();

    }

    int top() {
        return st.back();

    }

    int getMin() {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
