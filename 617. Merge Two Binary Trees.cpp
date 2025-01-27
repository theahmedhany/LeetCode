// 617. Merge Two Binary Trees : https://leetcode.com/problems/merge-two-binary-trees/

class Solution {
public:
    TreeNode* merge(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr) {
            return t2;
        }

        if (t2 == nullptr) {
            return t1;
        }

        TreeNode* newNode = new TreeNode(t1->val + t2->val);

        newNode->left = merge(t1->left, t2->left);
        newNode->right = merge(t1->right, t2->right);

        return newNode;
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1, root2);
    }
};