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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> values;

        // Put list1 values into vector
        while(list1 != nullptr) {
            values.push_back(list1->val);
            list1 = list1->next;
        }

        // Put list2 values into vector
        while(list2 != nullptr) {
            values.push_back(list2->val);
            list2 = list2->next;
        }

        // Sort values
        sort(values.begin(), values.end());

        // Create new linked list
        ListNode dummy(0);
        ListNode* tail = &dummy;

        for(int val : values) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        return dummy.next;
    }
};
