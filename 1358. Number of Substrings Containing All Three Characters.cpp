// 1358. Number of Substrings Containing All Three Characters : https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

class Solution {
    public:
        int numberOfSubstrings(string s) {
            int vis[3] = {-1, -1, -1}, cnt = 0;
    
            for (int i = 0; i < s.size(); i++) {
                vis[s[i] - 'a'] = i;
                cnt += min({vis[0], vis[1], vis[2]}) + 1;
            }
    
            return cnt;
        }
    };