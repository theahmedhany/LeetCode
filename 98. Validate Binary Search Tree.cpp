// 98. Validate Binary Search Tree : https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }

private:
    bool validate(TreeNode* root, long left, long right) {
        if (!root) {
            return true;
        }

        if (root->val <= left || root->val >= right) {
            return false;
        }

        return validate(root->left, left, root->val) &&
               validate(root->right, root->val, right);
    }
};