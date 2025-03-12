// 2529. Maximum Count of Positive Integer and Negative Integer : https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            return max(
                (int)nums.size() -
                    (upper_bound(nums.begin(), nums.end(), 0) - nums.begin()),
                lower_bound(nums.begin(), nums.end(), 0) - nums.begin());
        }
    };