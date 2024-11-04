// 2278. Percentage of Letter in String : https://leetcode.com/problems/percentage-of-letter-in-string/description/

class Solution {
public:
    int percentageLetter(string s, char letter) {
        double letter_count = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) {
            if (s[i] == letter)
                letter_count++;
        }

        return letter_count / size * 100;
    }
};