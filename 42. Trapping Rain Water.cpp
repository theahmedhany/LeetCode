// 42. Trapping Rain Water : https://leetcode.com/problems/trapping-rain-water/description/

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int max_left = height[left];
        int max_right = height[right];

        int answer = 0;

        while (left < right) {
            if (max_left <= max_right) {
                left++;
                max_left = max(max_left, height[left]);
                answer += max_left - height[left];
            } else {
                right--;
                max_right = max(max_right, height[right]);
                answer += max_right - height[right];
            }
        }
        return answer;
    }
};