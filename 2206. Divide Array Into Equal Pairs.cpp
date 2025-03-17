// 2206. Divide Array Into Equal Pairs : https://leetcode.com/problems/divide-array-into-equal-pairs/

class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int xr = 0, xr2 = 0;
            for (int x : nums) {
                xr ^= x, xr2 ^= (x + 1);
            }
            return !xr && !xr2;
        }
    };