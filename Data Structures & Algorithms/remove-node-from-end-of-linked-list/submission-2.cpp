/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

    int length = 0;
    ListNode* curr = head;

    while (curr != nullptr) {
        length++;
        curr = curr->next;
    }

    int removeIndex = length - n;

    if (removeIndex == 0)
        return head->next;

    curr = head;

    for (int i = 0; i < removeIndex - 1; i++) {
        curr = curr->next;
    }

    curr->next = curr->next->next;

    return head;

    }
};
