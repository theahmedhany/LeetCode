// 155. Min Stack : https://leetcode.com/problems/min-stack/

class MinStack {
public:
    stack<int> st;
    stack<int> min_st;

    void push(int val) {
        st.push(val);

        if (min_st.empty()) {
            min_st.push(val);
        } else {
            min_st.push(min(min_st.top(), val));
        }
    }

    void pop() {
        st.pop();
        min_st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return min_st.top(); }
};