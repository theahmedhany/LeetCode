// 145. Binary Tree Postorder Traversal : https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution {
public:
    void helper(TreeNode* root, vector<int>& v) {
        if (!root) {
            return;
        }

        helper(root->left, v);
        helper(root->right, v);
        v.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
};