// 1028. Recover a Tree From Preorder Traversal : https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/

class Solution {
    public:
        TreeNode* recoverFromPreorder(string s) {
            stack<TreeNode*> stk;
    
            for (int i = 0; i < s.size();) {
                int cnt = 0, v = 0;
                while (s[i] == '-') {
                    cnt++;
                    i++;
                }
    
                while (isdigit(s[i])) {
                    v = v * 10 + (s[i++] - '0');
                }
    
                TreeNode* node = new TreeNode(v);
                while (stk.size() > cnt) {
                    stk.pop();
                }
    
                if (stk.size()) {
                    if (!stk.top()->left) {
                        stk.top()->left = node;
                    } else {
                        stk.top()->right = node;
                    }
                }
    
                stk.push(node);
            }
    
            while (stk.size() > 1) {
                stk.pop();
            }
    
            return stk.top();
        }
    };