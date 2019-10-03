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
    ListNode* swapPairs(ListNode* head) {
      
  
        if(head == NULL || head->next == NULL)
        {return head;}
        ListNode* r = head->next->next; // next head to swapped
        
        ListNode* newhead = head->next; // to swap with
        head->next->next = head;
        head->next = swapPairs(r);
        return newhead;
        

        
    }
};
