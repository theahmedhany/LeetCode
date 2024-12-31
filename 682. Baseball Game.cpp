// 682. Baseball Game : https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int value1 = st.top();
                st.pop();
                int value2 = st.top();
                st.push(value1);
                st.push(value1 + value2);
            } else if (operations[i] == "D") {
                st.push(2 * st.top());
            } else if (operations[i] == "C") {
                st.pop();
            } else {
                st.push(stoi(operations[i]));
            }
        }

        int answer = 0;
        while (!st.empty()) {
            answer += st.top();
            st.pop();
        }

        return answer;
    }
};
