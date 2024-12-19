// 441. Arranging Coins : https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0;
        int right = n;

        while (left <= right) {
            long long mid = (right + left) / 2;
            long long sum = (mid * (mid + 1)) / 2;

            if (sum == n) {
                return mid;
            } else if (sum > n) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return right;
    }
};