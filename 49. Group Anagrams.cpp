// 49. Group Anagrams : https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> anagrams;

        for (int i = 0; i < strs.size(); i++) {
            string txt = strs[i];

            sort(txt.begin(), txt.end());

            anagrams[txt].push_back(strs[i]);
        }

        vector<vector<string>> answer;

        for (auto it : anagrams) {
            answer.push_back(it.second);
        }

        return answer;
    }
};