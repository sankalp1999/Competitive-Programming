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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *start = new ListNode(-1);
        // Use this as a starting point
        ListNode* curr; // for reference
        curr = start;
        
        // We will add onto start 
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                curr->next = l1;
                curr = curr->next;
                l1 = l1->next;
            }
            else
            {
                curr->next = l2;
                curr = curr->next;
                l2 = l2->next;
            }
        }
        if(l1)
        {
            curr->next = l1;
        }
        else if(l2)
        {
            curr->next = l2;
        }
        return start->next;
        
    }
};
