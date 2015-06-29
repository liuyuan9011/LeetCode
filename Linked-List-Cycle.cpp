/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if (NULL == head)
                return false;
            ListNode* p1 = head;
            ListNode* p2 = head;
            while (p2 != NULL)
            {
                p1 = p1->next;
                p2 = p2->next;
                if (NULL == p2)
                    return false;
                p2 = p2->next;
                if (p1 == p2)
                    return true;
            }
            return false;
        }
};
