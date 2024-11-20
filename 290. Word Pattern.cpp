// 290. Word Pattern : https://leetcode.com/problems/word-pattern/description/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> char_to_word;
        map<string, char> word_to_char;

        vector<string> store;
        string word;
        stringstream space(s);

        while (space >> word) {
            store.push_back(word);
        }

        if (store.size() != pattern.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {
            string word = store[i];
            if (char_to_word[pattern[i]] != "" &&
                char_to_word[pattern[i]] != word) {
                return false;
            }

            if (word_to_char[word] && word_to_char[word] != pattern[i]) {
                return false;
            }

            char_to_word[pattern[i]] = word;
            word_to_char[word] = pattern[i];
        }

        return true;
    }
};