// 367. Valid Perfect Square : https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0;
        int right = num;

        while (left <= right) {
            long long mid = (left + right) / 2;
            long long square = mid * mid;

            if (square == num) {
                return true;
            } else if (square > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return false;
    }
};