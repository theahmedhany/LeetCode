// 977. Squares of a Sorted Array : https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());

        int left = 0;
        int right = nums.size() - 1;
        int last = nums.size() - 1;

        while (left <= right) {
            long long left_square = abs(nums[left] * nums[left]);
            long long right_square = abs(nums[right] * nums[right]);

            if (left_square > right_square) {
                squares[last] = left_square;
                last--;
                left++;
            } else {
                squares[last] = right_square;
                last--;
                right--;
            }
        }

        return squares;
    }
};