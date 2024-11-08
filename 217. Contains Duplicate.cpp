// 217. Contains Duplicate : https://leetcode.com/problems/contains-duplicate/description/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> selected;

        for (int i = 0; i < nums.size(); i++) {
            if (selected[nums[i]]) {
                return true;
            }

            selected[nums[i]] = true;
        }

        return false;
    }
};