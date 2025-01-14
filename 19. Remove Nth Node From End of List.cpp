// 19. Remove Nth Node From End of List : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (n != 0) {
            fast = fast->next;
            n--;
        }

        if (fast == NULL) {
            return head->next;
        }

        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};