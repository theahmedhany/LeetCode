// 1749. Maximum Absolute Sum of Any Subarray : https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/

class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int sum = 0, mx = 0, mn = 0;
    
            for (int x : nums) {
                sum += x;
                mx = max(mx, sum);
                mn = min(mn, sum);
            }
    
            return mx - mn;
        }
    };