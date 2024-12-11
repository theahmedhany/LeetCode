// 15. 3Sum : https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> v1;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int number_1 = nums[i];

            int start = i + 1;
            int end = nums.size() - 1;

            while (start < end) {
                int sum = number_1 + nums[start] + nums[end];
                if (sum == 0) {
                    v1.push_back({nums[i], nums[start], nums[end]});

                    int v_start = nums[start];
                    int v_end = nums[end];

                    while (start < end && nums[start] == v_start) {
                        start++;
                    }
                    while (start < end && nums[end] == v_end) {
                        end--;
                    }
                } else if (sum < 0) {
                    start++;
                } else {
                    end--;
                }
            }
        }

        return v1;
    }
};