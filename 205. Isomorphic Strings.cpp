// 205. Isomorphic Strings : https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> txt_1;
        map<char, char> txt_2;

        for (int i = 0; i < s.size(); i++) {
            if (txt_1[s[i]] && txt_1[s[i]] != t[i] ||
                txt_2[t[i]] && txt_2[t[i]] != s[i]) {
                return false;
            }

            txt_1[s[i]] = t[i];
            txt_2[t[i]] = s[i];
        }

        return true;
    }
};