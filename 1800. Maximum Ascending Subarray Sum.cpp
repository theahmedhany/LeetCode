// 1800. Maximum Ascending Subarray Sum : https://leetcode.com/problems/maximum-ascending-subarray-sum/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            (nums[i] > nums[i - 1]) ? nums[0] += nums[i] : nums[0] = nums[i];
            answer = max(answer, nums[0]);
        }

        return answer;
    }
};