// 225. Implement Stack using Queues : https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {

    queue<int> Q_1;
    queue<int> Q_2;

public:
    void push(int x) { Q_1.push(x); }

    int pop() {
        while (Q_1.size() != 1) {
            Q_2.push(Q_1.front());
            Q_1.pop();
        }

        int last = Q_1.front();

        Q_1.pop();
        swap(Q_1, Q_2);
        return last;
    }

    int top() {
        while (Q_1.size() != 1) {
            Q_2.push(Q_1.front());
            Q_1.pop();
        }

        int last = Q_1.front();

        Q_1.pop();
        swap(Q_1, Q_2);
        Q_1.push(last);
        return last;
    }

    bool empty() { return Q_1.empty(); }
};