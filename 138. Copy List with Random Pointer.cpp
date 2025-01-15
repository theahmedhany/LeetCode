// 138. Copy List with Random Pointer : https://leetcode.com/problems/copy-list-with-random-pointer/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> nodes;
        Node* h = head;

        while (h) {
            nodes[h] = new Node(h->val);
            h = h->next;
        }

        h = head;

        while (h != NULL) {
            Node* newnode = nodes[h];
            newnode->next = nodes[h->next];
            newnode->random = nodes[h->random];
            h = h->next;
        }

        return nodes[head];
    }
};