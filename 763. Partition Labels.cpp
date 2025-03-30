// 763. Partition Labels : https://leetcode.com/problems/partition-labels/

class Solution {
    public:
        vector<int> partitionLabels(string s) {
            vector<int> lst(26), v;
            for (int i = 0; i < s.size(); i++) {
                lst[s[i] - 'a'] = i;
            }
    
            int st = 0, ed = 0;
            for (int i = 0; i < s.size(); i++) {
                ed = max(ed, lst[s[i] - 'a']);
                if (ed == i) {
                    v.push_back(ed - st + 1);
                    st = ed + 1;
                }
            }
            return v;
        }
    };