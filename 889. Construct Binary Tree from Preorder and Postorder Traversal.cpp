// 889. Construct Binary Tree from Preorder and Postorder Traversal : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/

class Solution {
    public:
        TreeNode* constructFromPrePost(vector<int>& preorder,
                                       vector<int>& postorder) {
            stack<TreeNode*> stk;
            auto root = new TreeNode(preorder[0]);
            stk.push(root);
            int i = 1, j = 0;
    
            while (stk.size()) {
                auto cur = stk.top();
    
                if (cur->val == postorder[j]) {
                    stk.pop();
                    j++;
                    continue;
                }
    
                auto Node = new TreeNode(preorder[i++]);
    
                if (!cur->left) {
                    cur->left = Node;
                } else {
                    cur->right = Node;
                }
    
                stk.push(Node);
            }
    
            return root;
        }
    };