// 392. Is Subsequence : https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[index]) {
                index++;
            }
        }

        return index == s.size();
    }
};