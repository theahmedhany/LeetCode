// 75. Sort Colors : https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int flag = 0;
        int size = nums.size() - 1;

        for (int i = 0; i <= size; i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[flag]);
                flag++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[size]);
                i--;
                size--;
            }
        }
    }
};