// 701. Insert into a Binary Search Tree : https://leetcode.com/problems/insert-into-a-binary-search-tree/

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);

        if (!root) {
            return newNode;
        }

        TreeNode* current = root;

        while (true) {
            if (val < current->val) {
                if (!current->left) {
                    current->left = newNode;
                    return root;
                }
                current = current->left;
            } else {
                if (!current->right) {
                    current->right = newNode;
                    return root;
                }
                current = current->right;
            }
        }
    }
};