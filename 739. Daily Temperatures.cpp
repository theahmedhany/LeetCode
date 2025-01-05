// 739. Daily Temperatures : https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size, 0);
        stack<int> st;

        for (int i = 0; i < size; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_index = st.top();
                st.pop();
                answer[prev_index] = i - prev_index;
            }
            st.push(i);
        }

        return answer;
    }
};