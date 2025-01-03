// 150. Evaluate Reverse Polish Notation : https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        unordered_set<string> operations = {"+", "-", "*", "/"};

        for (int i = 0; i < tokens.size(); ++i) {
            string test = tokens[i];

            if (operations.find(test) == operations.end()) {
                st.push(stoi(test));
            } else {
                int second = st.top();
                st.pop();

                int first = st.top();
                st.pop();

                if (test == "+") {
                    st.push(first + second);
                } else if (test == "-") {
                    st.push(first - second);
                } else if (test == "*") {
                    st.push(first * second);
                } else if (test == "/") {
                    st.push(first / second);
                }
            }
        }

        return st.top();
    }
};