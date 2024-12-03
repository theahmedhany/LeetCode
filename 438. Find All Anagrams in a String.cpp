// 438. Find All Anagrams in a String : https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_length = s.length();
        int p_length = p.length();

        if (s.size() < p.size()) {
            return {};
        }

        vector<int> p_vector(26, 0);
        vector<int> s_vector(26, 0);

        vector<int> answer;

        for (int i = 0; i < p_length; i++) {
            p_vector[p[i] - 'a']++;
        }

        int start = 0;

        for (int i = 0; i < s_length; i++) {
            s_vector[s[i] - 'a']++;

            if (i >= p.size()) {
                s_vector[s[start] - 'a']--;
                start++;
            }

            if (p_vector == s_vector) {
                answer.push_back(start);
            }
        }

        return answer;
    }
};