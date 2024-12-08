// 88. Merge Sorted Array : https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;

        int total = n + m - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[total--] = nums2[j--];
            } else {
                nums1[total--] = nums1[i--];
            }
        }

        while (j >= 0) {
            nums1[total--] = nums2[j--];
        }
    }
};