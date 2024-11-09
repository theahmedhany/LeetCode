// 14. Longest Common Prefix : https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string answer = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char selected = strs[0][i];

            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != selected)
                    return answer;
            }
            answer += selected;
        }

        return answer;
    }
};