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

    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;

        ListNode* first;
        ListNode* second;

        splitList(head, first, second);

        second = reverseList(second);

        ListNode* p1 = first;
        ListNode* p2 = second;

        while (p2 != nullptr) {
            ListNode* firstNext = p1->next;
            ListNode* secondNext = p2->next;

            p1->next = p2;
            p2->next = firstNext;

            p1 = firstNext;
            p2 = secondNext;
        }
    }


    void splitList(ListNode* head, ListNode*& first, ListNode*& second) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        first = head;
        second = slow->next;
        slow->next = nullptr;
    }
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
};
