// 110. Balanced Binary Tree : https://leetcode.com/problems/balanced-binary-tree/

class Solution {
public:
    bool isBalanced(TreeNode* root) { return checkBalance(root) != -1; }

private:
    int checkBalance(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftHeight = checkBalance(root->left);

        if (leftHeight == -1) {
            return -1;
        }

        int rightHeight = checkBalance(root->right);

        if (rightHeight == -1) {
            return -1;
        }

        if (abs(leftHeight - rightHeight) > 1) {
            return -1;
        }

        return max(leftHeight, rightHeight) + 1;
    }
};