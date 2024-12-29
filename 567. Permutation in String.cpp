// 567. Permutation in String : https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool areVectorsEqual(vector<int> a, vector<int> b) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        vector<int> v_1(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            v_1[s1[i] - 'a']++;
        }

        vector<int> v_2(26, 0);
        int x = 0;

        for (int i = 0; i < s2.size();) {
            v_2[s2[i] - 'a']++;

            if (i - x + 1 == s1.size()) {
                if (v_1 == v_2) {
                    return true;
                }

                if (i - x + 1 < s1.size()) {
                    i++;
                } else {
                    v_2[s2[x] - 'a']--;
                    x++;
                    i++;
                }
            } else {
                i++;
            }
        }

        return false;
    }
};