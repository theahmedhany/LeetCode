// 901. Online Stock Span : https://leetcode.com/problems/online-stock-span/

class StockSpanner {
public:
    stack<pair<int, int>> st;

    int next(int price) {
        int answer = 1;

        while (!st.empty() && st.top().first <= price) {
            answer += st.top().second;
            st.pop();
        }

        st.push({price, answer});
        return answer;
    }
};