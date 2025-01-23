// 543. Diameter of Binary Tree : https://leetcode.com/problems/diameter-of-binary-tree/

int answer = 0;

int done(TreeNode* root, int& D) {
    if (!root) {
        return 0;
    }

    int max_left = done(root->left, D);
    int max_right = done(root->right, D);

    D = max(D, max_left + max_right);

    return max(max_left, max_right) + 1;
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int answer = 0;
        done(root, answer);

        return answer;
    }
};