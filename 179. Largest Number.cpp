// 179. Largest Number : https://leetcode.com/problems/largest-number/description/

bool compare(string s1, string s2) { return s1 + s2 > s2 + s1; }

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string new_number[nums.size()];

        for (int i = 0; i < nums.size(); i++) {
            new_number[i] = to_string(nums[i]);
        }

        sort(new_number, new_number + nums.size(), compare);

        string answer = "";

        for (int i = 0; i < nums.size(); i++) {
            answer += new_number[i];
        }

        if (new_number[0] == "0") {
            return "0";
        }

        return answer;
    }
};