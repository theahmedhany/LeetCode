// 680. Valid Palindrome II : https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return (ispli(s, left + 1, right) || ispli(s, left, right - 1));
            }
        }

        return true;
    }

    bool ispli(string s, int left, int right) {
        while (left <= right) {
            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};