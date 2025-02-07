// 1038. Binary Search Tree to Greater Sum Tree : https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

class Solution {
public:
    int sum = 0;

    void solve(TreeNode* root) {
        if (!root) {
            return;
        }

        solve(root->right);
        sum += root->val;
        root->val = sum;
        solve(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        solve(root);
        return root;
    }
};