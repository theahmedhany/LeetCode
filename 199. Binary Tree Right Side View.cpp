// 199. Binary Tree Right Side View : https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> output;
        queue<TreeNode*> q;

        if (!root) {
            return output;
        }

        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> helper;

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                helper.push_back(node->val);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            output.push_back(helper[n - 1]);
        }

        return output;
    }
};