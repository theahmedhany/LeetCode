// 1930. Unique Length-3 Palindromic Subsequences : https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {0}, result = 0;

        for (int i = 0; i < s.size(); i++) {
            first[s[i] - 'a'] = min(i, first[s[i] - 'a']);
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < 26; i++) {
            unordered_set<char> st;
            if (first[i] < last[i]) {
                for (int j = first[i] + 1; j < last[i]; j++) {
                    st.insert(s[j]);
                }
                result += st.size();
            }
        }
        return result;
    }
};