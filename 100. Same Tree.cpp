// 100. Same Tree : https://leetcode.com/problems/same-tree/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (!p && q || !q && p) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};