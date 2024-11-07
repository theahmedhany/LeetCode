// 58. Length of Last Word : https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int txt_length = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (txt_length != 0 && s[i] == ' ') {
                return txt_length;
            }

            if (s[i] == ' ') {
                continue;
            } else {
                txt_length++;
            }
        }

        return txt_length;
    }
};