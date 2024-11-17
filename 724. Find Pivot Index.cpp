// 724. Find Pivot Index : https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            right_sum -= nums[i];
            if (right_sum == left_sum) {
                return i;
            }

            left_sum += nums[i];
        }

        return -1;
    }
};