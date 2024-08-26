class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) return head;

        ListNode* tail = head;
        int size = 1;
        while (tail->next) {
            tail = tail->next;
            size++;
        }

        k = k % size;
        if (k == 0) return head;

        ListNode* newTail = head;
        for (int i = 1; i < size - k; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        tail->next = head;
        return newHead;

    }
};

