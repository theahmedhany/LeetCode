// 374. Guess Number Higher or Lower : https://leetcode.com/problems/guess-number-higher-or-lower/

class Solution {
public:
    int guessNumber(int n) {
        long long left = 1;
        int right = n;
        int answer = 0;

        while (true) {
            int mid = (right + left) / 2;
            int result = guess(mid);

            if (result == -1) {
                right = mid - 1;
            } else if (result == 1) {
                left = mid + 1;
            } else {
                answer = mid;
                break;
            }
        }
        return answer;
    }
};