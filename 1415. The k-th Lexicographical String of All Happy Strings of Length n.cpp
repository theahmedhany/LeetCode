// 1415. The k-th Lexicographical String of All Happy Strings of Length n : https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/

class Solution {
    public:
        string getHappyString(int n, int k) {
            string ans = "";
            int range = 3 * (1 << (n - 1));
    
            if (range < k) {
                return "";
            }
    
            while (n && k) {
                range = (1 << (n - 1));
    
                for (char ch = 'a'; ch <= 'c'; ch++) {
                    if (ans.size() && ans.back() == ch) {
                        continue;
                    }
    
                    if (k > range) {
                        k -= range;
                    } else {
                        ans.push_back(ch);
                        break;
                    }
                }
    
                n--;
            }
    
            return ans;
        }
    };