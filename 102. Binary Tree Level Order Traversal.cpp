// 102. Binary Tree Level Order Traversal : https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;

        if (!root) {
            return v;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int len = q.size();
            vector<int> l;

            for (int i = 0; i < len; i++) {
                TreeNode* node = q.front();
                q.pop();
                l.push_back(node->val);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            v.push_back(l);
        }

        return v;
    }
};