// 125. Valid Palindrome : https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int rigth = s.size() - 1;

        while (left <= rigth) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[rigth])) {
                rigth--;
            } else if (tolower(s[left]) != tolower(s[rigth])) {
                return false;
            } else {
                left++;
                rigth--;
            }
        }

        return true;
    }
};