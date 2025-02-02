// 1448. Count Good Nodes in Binary Tree : https://leetcode.com/problems/count-good-nodes-in-binary-tree/

class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count = 0;
        if (!root)
            return count;
        countgoodnodes(root, count, root->val);
        return count;
    }

private:
    void countgoodnodes(TreeNode* root, int& count, int maxforthisstep) {
        if (root == NULL)
            return;
        if (root->val >= maxforthisstep) {
            count++;
            maxforthisstep = root->val;
        }
        countgoodnodes(root->left, count, maxforthisstep);
        countgoodnodes(root->right, count, maxforthisstep);
    }
};