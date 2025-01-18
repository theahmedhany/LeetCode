// 94. Binary Tree Inorder Traversal : https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;

        while (root || !st.empty()) {
            while (root) {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            ans.push_back(root->val);
            st.pop();
            root = root->right;
        }

        return ans;
    }
};