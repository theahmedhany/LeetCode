// 2375. Construct Smallest Number From DI String : https://leetcode.com/problems/construct-smallest-number-from-di-string/

class Solution {
    public:
        string smallestNumber(string pattern) {
            int n = pattern.size();
            string stk, ans;
    
            for (int i = 0; i <= n; i++) {
                stk.push_back((i + 1) + '0');
                if (i == n || pattern[i] == 'I') {
                    while (stk.size()) {
                        ans.push_back(stk.back()), stk.pop_back();
                    }
                }
            }
    
            return ans;
        }
    };