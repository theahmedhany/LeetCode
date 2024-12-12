// 11. Container With Most Water : https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int max_value = INT_MIN;

        while (start < end) {
            int answer = min(height[start], height[end]) * (end - start);
            max_value = max(max_value, answer);

            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        return max_value;
    }
};