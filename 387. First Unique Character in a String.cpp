// 387. First Unique Character in a String : https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        int indx = -1;

        map<char, int> found;
        for (int i = 0; i < s.size(); i++) {
            char character = s[i];
            found[character]++;
        }

        for (int i = 0; i < s.size(); i++) {
            char character = s[i];
            int count = found[character];

            if (count == 1) {
                return i;
            }
        }

        return indx;
    }
};