// 1980. Find Unique Binary String : https://leetcode.com/problems/find-unique-binary-string/

class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            string s;
    
            for (int i = 0; i < nums.size(); i++) {
                s += !(nums[i][i] - '0') + '0';
            }
    
            return s;
        }
    };