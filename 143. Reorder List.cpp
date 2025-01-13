// 143. Reorder List : https://leetcode.com/problems/reorder-list/

class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* h = head;

        while (h != NULL) {
            v.push_back(h->val);
            h = h->next;
        }

        int l = v.size();
        h = head;

        for (int i = 0; i < l / 2; i++) {
            h->val = v[i];
            h = h->next;
            h->val = v[l - i - 1];
            h = h->next;
        }

        if (l % 2 != 0) {
            h->val = v[l / 2];
        }
    }
};