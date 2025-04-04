// 1123. Lowest Common Ancestor of Deepest Leaves : https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/

class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if (!root) {
                return 0;
            }
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        }
    
        TreeNode* dfs(TreeNode* root, int d, int mxd) {
            if (!root) {
                return nullptr;
            }
    
            if (d == mxd) {
                return root;
            }
    
            auto left = dfs(root->left, d + 1, mxd);
            auto right = dfs(root->right, d + 1, mxd);
    
            if (left && right) {
                return root;
            }
    
            return (left ? left : right);
        }
    
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
            if (!root) {
                return nullptr;
            }
    
            int depth = maxDepth(root);
            return dfs(root, 1, depth);
        }
    };