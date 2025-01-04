// 735. Asteroid Collision : https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            int asteroid = asteroids[i];

            if (asteroid > 0) {
                st.push(asteroid);
            } else {
                while (!st.empty() && st.top() > 0 &&
                       st.top() < abs(asteroid)) {
                    st.pop();
                }

                if (!st.empty() && st.top() == abs(asteroid)) {
                    st.pop();
                } else if (st.empty() || st.top() < 0) {
                    st.push(asteroid);
                }
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};