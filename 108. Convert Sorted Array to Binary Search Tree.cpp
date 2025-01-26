// 108. Convert Sorted Array to Binary Search Tree : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
    TreeNode* tree(vector<int>& nums, int left, int right) {
        if (left > right) {
            return NULL;
        }

        int mid = (left + right) / 2;
        TreeNode* newONE = new TreeNode(nums[mid]);

        newONE->left = tree(nums, left, mid - 1);
        newONE->right = tree(nums, mid + 1, right);

        return newONE;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return tree(nums, 0, nums.size() - 1);
    }
};