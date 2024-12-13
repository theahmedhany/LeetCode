// 1498. Number of Subsequences That Satisfy the Given Sum Condition : https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int mod = 1e9 + 7;

        sort(nums.begin(), nums.end());

        vector<int> power(nums.size() + 1, 1);

        for (int i = 1; i < nums.size(); i++) {
            power[i] = power[i - 1] * 2 % mod;
        }

        int left = 0;
        int right = nums.size() - 1;
        int answer = 0;

        while (left <= right) {
            if (nums[left] + nums[right] > target) {
                right--;
            } else {
                answer = (answer + power[right - left]) % mod;
                left++;
            }
        }

        return answer;
    }
};
