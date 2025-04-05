// 1863. Sum of All Subset XOR Totals : https://leetcode.com/problems/sum-of-all-subset-xor-totals/

class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            return accumulate(nums.begin(), nums.end(), 0, bit_or<>())
                   << (nums.size() - 1);
        }
    };