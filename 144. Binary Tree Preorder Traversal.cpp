// 144. Binary Tree Preorder Traversal : https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    void help(TreeNode* root, vector<int>& v) {
        if (!root) {
            return;
        }

        v.push_back(root->val);
        help(root->left, v);
        help(root->right, v);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        help(root, v);
        return v;
    }
};