// 1. Two Sum : https://leetcode.com/problems/two-sum/ 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> our_map;
        int diff_number;

        for (int i = 0; i < nums.size(); i++) {
            diff_number = target - nums[i];

            if (our_map.count(diff_number)) {
                return {our_map[diff_number], i};
            }
            our_map[nums[i]] = i;
        }
        return {-1};
    }
};