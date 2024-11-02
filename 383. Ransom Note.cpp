// 383. Ransom Note : https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq_1(26, 0);
        vector<int> freq_2(26, 0);

        for (int i = 0; i < ransomNote.size(); i++) {
            freq_1[ransomNote[i] - 'a']++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            freq_2[magazine[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq_1[i] > freq_2[i]) {
                return false;
            }
        }
        return true;
    }
};