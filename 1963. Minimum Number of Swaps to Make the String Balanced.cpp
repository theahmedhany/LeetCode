// 1963. Minimum Number of Swaps to Make the String Balanced : https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/

class Solution {
public:
    int minSwaps(string s) {
        int extra_close = 0;
        int max_value = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ']') {
                extra_close++;
            } else {
                extra_close--;
            }
            max_value = max(max_value, extra_close);
        }

        return (max_value + 1) / 2;
    }
};