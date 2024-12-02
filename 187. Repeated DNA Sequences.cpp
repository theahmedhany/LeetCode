// 187. Repeated DNA Sequences : https://leetcode.com/problems/repeated-dna-sequences/description/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> sequence;

        vector<string> answer;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            temp += s[i];
            if (temp.size() == 10) {
                if (sequence[temp] == 1) {
                    answer.push_back(temp);
                }
                sequence[temp]++;
                temp = temp.substr(1, temp.size());
            }
        }

        return answer;
    }
};